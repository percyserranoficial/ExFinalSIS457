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
