// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
AEnemigo::AEnemigo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// MALLA
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	if (MeshAsset.Succeeded())
	{
		MeshEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshEnemigo"));
		MeshEnemigo->SetStaticMesh(MeshAsset.Object);
		RootComponent = MeshEnemigo;
	}

	//MATERIAL
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Props/Materials/M_Rock.M_Rock'"));
	if (MaterialAsset.Succeeded())
	{
		MaterialEnemigo = MaterialAsset.Object;
		if (MeshEnemigo)
		{
			MeshEnemigo->SetMaterial(0, MaterialEnemigo);
		}
	}
	
	// Establecer escala inicial
	MeshEnemigo->SetWorldScale3D(FVector(2.5f, 2.5f, 2.5f)); // Ajusta la escala según sea necesario
}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}




