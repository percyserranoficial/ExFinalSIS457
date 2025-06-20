// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomba.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABomba::ABomba()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//ESCALA
	SetActorScale3D(FVector(1.5f, 1.5f, 1.5f));

	// MALLA
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	MeshBomba = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshBomba"));
	if (MeshAsset.Succeeded())
	{
		MeshBomba->SetStaticMesh(MeshAsset.Object);
	}

	//MATERIAL
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse'"));
	if (MaterialAsset.Succeeded())
	{
		MeshBomba->SetMaterial(0, MaterialAsset.Object);
	}
}

// Called when the game starts or when spawned
void ABomba::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABomba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

