// Fill out your copyright notice in the Description page of Project Settings.


#include "PowerUp.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
APowerUp::APowerUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// MESH
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	MeshPowerUp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshPowerUp"));
	if (MeshAsset.Succeeded())
	{
		MeshPowerUp->SetStaticMesh(MeshAsset.Object);
	}

	//MATERIAL 
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile.M_Tech_Hex_Tile'"));
	if (MaterialAsset.Succeeded())
	{
		MaterialPowerUp = MaterialAsset.Object;
		MeshPowerUp->SetMaterial(0, MaterialPowerUp);
	}

}

// Called when the game starts or when spawned
void APowerUp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APowerUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

