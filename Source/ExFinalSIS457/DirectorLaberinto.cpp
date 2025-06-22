// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorLaberinto.h"

// Sets default values
ADirectorLaberinto::ADirectorLaberinto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirectorLaberinto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirectorLaberinto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADirectorLaberinto::ConstruirLaberinto(UWorld* World, const TArray<TArray<int32>>& Matriz, IILaberintoBuilder* Builder)
{
	if (!World) return;

	const float Espaciado = 400.0f;

	for (int32 i = 0; i < Matriz.Num(); ++i)
	{
		for (int32 j = 0; j < Matriz[i].Num(); ++j)
		{
			int32 Tipo = Matriz[i][j];
			FVector Posicion(j * Espaciado, i * Espaciado, 0.0f);

			TSubclassOf<AActor> BuilderClase = nullptr;

			switch (Tipo)
			{
			case 3: BuilderClase = BuilderConcreto; break; // Bloque de concreto
			case 2: BuilderClase = BuilderMadera; break; // Bloque de madera
			case 1: BuilderClase = BuilderAcero; break; // Bloque de acero
				default: 
				Builder->RegistrarPosicionLibre(Posicion); // Posición libre
				continue; // Saltar al siguiente bloque
			}

			AActor* BuilderActor = World->SpawnActor<AActor>(BuilderClase, Posicion, FRotator::ZeroRotator);
			IILaberintoBuilder* BuilderInterface = Cast<IILaberintoBuilder>(BuilderActor);

			if (BuilderInterface)
			{
				switch (Tipo)
				{
				case 3:
					BuilderInterface->ConstruirBloqueConcreto(World, Posicion);
					break;
				case 2:
					BuilderInterface->ConstruirBloqueMadera(World, Posicion);
					break;
				case 1:
					BuilderInterface->ConstruirBloqueAcero(World, Posicion);
					break;
				default:
					BuilderInterface->RegistrarPosicionLibre(Posicion);
					break;
				}
			}
		}
	}
}

