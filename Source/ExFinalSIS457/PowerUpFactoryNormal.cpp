// Fill out your copyright notice in the Description page of Project Settings.


#include "PowerUpFactoryNormal.h"
#include "PowerUpVelocidad.h"
#include "PowerUpBombasExtra.h"

// Sets default values
APowerUpFactoryNormal::APowerUpFactoryNormal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APowerUpFactoryNormal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APowerUpFactoryNormal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AActor* APowerUpFactoryNormal::CrearPowerUpVelocidad(UWorld* World, FVector Posicion)
{
	return World->SpawnActor<APowerUpVelocidad>(APowerUpVelocidad::StaticClass(), Posicion, FRotator::ZeroRotator);
}

AActor* APowerUpFactoryNormal::CrearPowerUpBombasExtra(UWorld* World, FVector Posicion)
{
	return World->SpawnActor<APowerUpBombasExtra>(APowerUpBombasExtra::StaticClass(), Posicion, FRotator::ZeroRotator);
}

