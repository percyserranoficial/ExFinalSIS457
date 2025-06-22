// Fill out your copyright notice in the Description page of Project Settings.


#include "Puerta.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
APuerta::APuerta()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//MALLA
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Props/SM_DoorFrame.SM_DoorFrame'"));
	if (MeshAsset.Succeeded())
	{
		MeshPuerta = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshPuerta"));
		MeshPuerta->SetStaticMesh(MeshAsset.Object);
		RootComponent = MeshPuerta;
	}

	//MATERIAL 
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Steel.M_Metal_Steel'"));
	if (MaterialAsset.Succeeded())
	{
		MaterialCerrada = MaterialAsset.Object;
	}

	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAssetAbierta(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'"));
	if (MaterialAssetAbierta.Succeeded())
	{
		MaterialAbierta = MaterialAssetAbierta.Object;
	}

}

// Called when the game starts or when spawned
void APuerta::BeginPlay()
{
	Super::BeginPlay();
	
	if(EstadoActual)
	{ 
		EstadoActual->Ejecutar(this);
	}
	
}

// Called every frame
void APuerta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APuerta::CambiarEstado(TScriptInterface<IIEstadoPuerta> NuevoEstado)
{
	EstadoActual = NuevoEstado;
	if (EstadoActual)
	{
		EstadoActual->Ejecutar(this);
	}
}

