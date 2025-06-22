// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExFinalSIS457GameMode.h"
#include "ExFinalSIS457Character.h"
#include "UObject/ConstructorHelpers.h"
//Builder
#include "ConstructorLaberinto.h"
#include "DirectorLaberinto.h"
//decorator
#include "BombaDecorator.h"
#include "Kismet/GamePlayStatics.h"
#include "Bomba.h"
#include "BombaConDobleExplosion.h"
#include "Engine/World.h"
// State
#include "Puerta.h"
#include "EstadoCerrada.h"
#include "EstadoAbierta.h"
// Iterator
#include "IteratorEspaciosLibres.h"
#include "IEspacioIterator.h"
#include "Enemigo.h"
// Abstract Factory
#include "PowerUpFactoryNormal.h"
#include "PowerUpVelocidad.h"
#include "PowerUpBombasExtra.h"



AExFinalSIS457GameMode::AExFinalSIS457GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AExFinalSIS457GameMode::BeginPlay()
{
	Super::BeginPlay();
	BuilderL();
	DecoratorB();
	StateP();
	IteratoE();
	ABstractFactory(6);
}

void AExFinalSIS457GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void AExFinalSIS457GameMode::BuilderL()
{
	TArray<TArray<int32>> Matriz = {
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 1, 0, 3, 0, 0, 0, 0, 3, 0, 0, 1 },
	{ 1, 0, 2, 0, 1, 0, 1, 1, 1, 0, 2, 3, 0, 3, 1 },
	{ 1, 0, 2, 0, 0, 0, 2, 0, 2, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 2, 3, 3, 2, 1, 0, 1, 3, 3, 2, 2, 2, 1 },
	{ 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 1, 3, 3, 1, 0, 2, 1, 1, 3, 3, 3, 1, 0, 1 },
	{ 1, 2, 0, 0, 1, 0, 0, 0, 3, 0, 0, 2, 2, 0, 1 },
	{ 1, 1, 1, 0, 2, 3, 3, 0, 1, 1, 1, 0, 2, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1 },
	{ 1, 0, 1, 0, 1, 0, 1, 0, 2, 0, 2, 2, 3, 0, 1 },
	{ 1, 0, 1, 0, 1, 0, 0, 0, 2, 0, 1, 0, 0, 0, 1 },
	{ 1, 0, 1, 3, 2, 2, 3, 1, 2, 0, 3, 0, 1, 3, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
	};


	UWorld* World = GetWorld();
	if (!World) return;

	ADirectorLaberinto* Director = World->SpawnActor<ADirectorLaberinto>();
	if (!Director) return;
	AConstructorLaberinto* Builder = World->SpawnActor<AConstructorLaberinto>();
	
	Director->BuilderAcero = AConstructorLaberinto::StaticClass();
	Director->BuilderMadera = AConstructorLaberinto::StaticClass();
	Director->BuilderConcreto = AConstructorLaberinto::StaticClass();

	if (Director)
	{
		Director->ConstruirLaberinto(World, Matriz, Builder);
	}

    PosicionesLibres = Builder->ObtenerPosicionesLibres();

	
}

void AExFinalSIS457GameMode::DecoratorB()
{
	if (PosicionesLibres.Num() < 8) return;

	UWorld* World = GetWorld();
	if (!World) return;

	TArray<int32> IndicesUsados;

	for (int32 i = 0; i < 8; ++i)
	{
		int32 Index;

		// Buscar un índice aleatorio que no se haya usado
		do
		{
			Index = FMath::RandRange(0, PosicionesLibres.Num() - 1);
		} while (IndicesUsados.Contains(Index));

		IndicesUsados.Add(Index);

		FVector Pos = PosicionesLibres[Index];

		ABomba* BombaBase = World->SpawnActor<ABomba>(ABomba::StaticClass(), Pos, FRotator::ZeroRotator);
		ABombaConDobleExplosion* BombaDecorada = World->SpawnActor<ABombaConDobleExplosion>(ABombaConDobleExplosion::StaticClass(), Pos, FRotator::ZeroRotator);

		if (BombaBase && BombaDecorada)
		{
			BombaDecorada->SetBombaDecorada(TScriptInterface<IIBomba>(BombaBase));
			BombaBase->Explotar();
			BombaDecorada->Explotar();
		}
	}
}

void AExFinalSIS457GameMode::StateP()
{
	UWorld* World = GetWorld();
	if (!World || PosicionesLibres.Num() == 0) return;

	// Escoger una posición libre aleatoria
	int32 IndiceAleatorio = FMath::RandRange(0, PosicionesLibres.Num() - 1);
	FVector PosicionPuerta = PosicionesLibres[IndiceAleatorio];

	// Spawnear la puerta
	APuerta* Puerta = World->SpawnActor<APuerta>(APuerta::StaticClass(), PosicionPuerta, FRotator::ZeroRotator);
	if (!Puerta) return;

	// Spawnear el estado cerrado
	AEstadoCerrada* EstadoCerrada = World->SpawnActor<AEstadoCerrada>(AEstadoCerrada::StaticClass());
	if (EstadoCerrada)
	{
		Puerta->CambiarEstado(TScriptInterface<IIEstadoPuerta>(EstadoCerrada));
	}

	// Luego de unos segundos abrir la puerta
	FTimerHandle TimerHandle;
	World->GetTimerManager().SetTimer(TimerHandle, [=]()
	{

			AEstadoAbierta* EstadoAbierta = World->SpawnActor<AEstadoAbierta>(AEstadoAbierta::StaticClass());
			if (EstadoAbierta)
			{
				Puerta->CambiarEstado(TScriptInterface<IIEstadoPuerta>(EstadoAbierta));
			}

	}, 20.0f, false);
	
}

void AExFinalSIS457GameMode::IteratoE()
{
	if (PosicionesLibres.Num() == 0) return;

	UWorld* World = GetWorld();
	if (!World) return;

	// Crear el iterator
	AIteratorEspaciosLibres* Iterator = World->SpawnActor<AIteratorEspaciosLibres>();
	if (!Iterator) return;

	Iterator->Inicializar(PosicionesLibres);

	// Recolectar las posiciones del iterator
	TArray<FVector> PosicionesCandidatas;

	while (Iterator->HasNext())
	{
		FVector Pos = Iterator->Next();
		PosicionesCandidatas.Add(Pos);
	}

	// Barajar posiciones aleatoriamente
	int32 CantidadEnemigos = 10;
	CantidadEnemigos = FMath::Min(CantidadEnemigos, PosicionesCandidatas.Num()); // Evitar desbordes

	// Reordenar aleatoriamente
	for (int32 i = 0; i < PosicionesCandidatas.Num(); ++i)
	{
		int32 IndiceAleatorio = FMath::RandRange(0, PosicionesCandidatas.Num() - 1);
		PosicionesCandidatas.Swap(i, IndiceAleatorio);
	}

	// Spawnear enemigos en las posiciones barajadas
	for (int32 i = 0; i < CantidadEnemigos; ++i)
	{
		FVector Pos = PosicionesCandidatas[i];
		World->SpawnActor<AEnemigo>(AEnemigo::StaticClass(), Pos, FRotator::ZeroRotator);
	}

}

void AExFinalSIS457GameMode::ABstractFactory(int32 CantidadPowerUps)
{
	if (PosicionesLibres.Num() < CantidadPowerUps) return;

	UWorld* World = GetWorld();
	if (!World) return;

	// Crear fábrica
	APowerUpFactoryNormal* Fabrica = World->SpawnActor<APowerUpFactoryNormal>();
	if (!Fabrica) return;

	// Copia local para evitar duplicados
	TArray<FVector> PosicionesDisponibles = PosicionesLibres;

	for (int32 i = 0; i < CantidadPowerUps; ++i)
	{
		// Elegir una posición aleatoria
		int32 Index = FMath::RandRange(0, PosicionesDisponibles.Num() - 1);
		FVector Pos = PosicionesDisponibles[Index];
		PosicionesDisponibles.RemoveAt(Index);

		// Alternar aleatoriamente entre power-ups
		int32 TipoPowerUp = FMath::RandRange(0, 1);
		if (TipoPowerUp == 0)
		{
			Fabrica->CrearPowerUpVelocidad(World, Pos);
		}
		else
		{
			Fabrica->CrearPowerUpBombasExtra(World, Pos);
		}
	}
}
