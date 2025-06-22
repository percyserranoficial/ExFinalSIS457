// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoAbierta.h"
#include "Puerta.h"
#include "Engine/Engine.h"

// Sets default values
AEstadoAbierta::AEstadoAbierta()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoAbierta::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoAbierta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoAbierta::Ejecutar(APuerta* Puerta)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("La puerta está abierta."));
	
	if (Puerta && Puerta->MeshPuerta)
	{
		// ? Desactivar colisión para que el jugador pase
		Puerta->MeshPuerta->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		// ? Cambiar a material de puerta abierta (si existe)
		if (Puerta->MaterialAbierta)
		{
			Puerta->MeshPuerta->SetMaterial(0, Puerta->MaterialAbierta);
		}
	}
}

