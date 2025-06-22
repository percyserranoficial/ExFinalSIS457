// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoCerrada.h"
#include "Puerta.h"
#include "Engine/Engine.h"

// Sets default values
AEstadoCerrada::AEstadoCerrada()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoCerrada::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoCerrada::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoCerrada::Ejecutar(APuerta* Puerta)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("La puerta está cerrada."));

	if (Puerta && Puerta->MeshPuerta)
	{
		Puerta->MeshPuerta->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		Puerta->MeshPuerta->SetCollisionResponseToAllChannels(ECR_Block);

		// Cambiar el material de la puerta a cerrado
		if (Puerta->MaterialCerrada)
		{
			Puerta->MeshPuerta->SetMaterial(0, Puerta->MaterialCerrada);
		}
	}
}

