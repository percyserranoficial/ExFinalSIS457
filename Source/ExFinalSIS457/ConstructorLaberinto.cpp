// Fill out your copyright notice in the Description page of Project Settings.


#include "ConstructorLaberinto.h"
#include "Engine/World.h"
#include "BloqueAcero.h"
#include "BloqueMadera.h"
#include "BloqueConcreto.h"

// Sets default values
AConstructorLaberinto::AConstructorLaberinto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AConstructorLaberinto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AConstructorLaberinto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AConstructorLaberinto::Reset()
{
	PosicionesLibres.Empty();
}

void AConstructorLaberinto::ConstruirBloqueAcero(UWorld* World, FVector Posicion)
{
	FActorSpawnParameters SpawnParams;
	Bloque = World->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), Posicion, FRotator::ZeroRotator, SpawnParams);
}

void AConstructorLaberinto::ConstruirBloqueMadera(UWorld* World, FVector Posicion)
{
	FActorSpawnParameters SpawnParams;
	Bloque = World->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), Posicion, FRotator::ZeroRotator, SpawnParams);
}

void AConstructorLaberinto::ConstruirBloqueConcreto(UWorld* World, FVector Posicion)
{
	FActorSpawnParameters SpawnParams;
	Bloque = World->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), Posicion, FRotator::ZeroRotator, SpawnParams);
}

void AConstructorLaberinto::RegistrarPosicionLibre(FVector Posicion)
{
	PosicionesLibres.Add(Posicion);
	UE_LOG(LogTemp, Warning, TEXT("Posición libre registrada: %s"), *Posicion.ToString());
}

TArray<FVector> AConstructorLaberinto::ObtenerPosicionesLibres() const
{
	return PosicionesLibres;
}

