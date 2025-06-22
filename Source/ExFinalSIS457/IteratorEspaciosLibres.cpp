// Fill out your copyright notice in the Description page of Project Settings.


#include "IteratorEspaciosLibres.h"

// Sets default values
AIteratorEspaciosLibres::AIteratorEspaciosLibres()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Indice = 0;
}

// Called when the game starts or when spawned
void AIteratorEspaciosLibres::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AIteratorEspaciosLibres::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AIteratorEspaciosLibres::Inicializar(const TArray<FVector>& Posiciones)
{
	PosicionesLibres = Posiciones;
	Indice = 0;
}

bool AIteratorEspaciosLibres::HasNext()
{
	return Indice < PosicionesLibres.Num();
}

FVector AIteratorEspaciosLibres::Next()
{
	if (!HasNext()) return FVector::ZeroVector;

	return PosicionesLibres[Indice++];
}

