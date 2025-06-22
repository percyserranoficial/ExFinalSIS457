// Fill out your copyright notice in the Description page of Project Settings.


#include "PowerUpBombasExtra.h"
#include "GameFramework/Character.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Engine.h"

// Sets default values
APowerUpBombasExtra::APowerUpBombasExtra()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SetActorScale3D(FVector(1.0f));

	//MALLA
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	MeshPowerUpBombasExtra = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshPowerUpBombasExtra"));
	if (MeshAsset.Succeeded())
	{
		MeshPowerUpBombasExtra->SetStaticMesh(MeshAsset.Object);
		MeshPowerUpBombasExtra->SetRelativeScale3D(FVector(0.5f)); // Ajustar escala de la malla
		RootComponent = MeshPowerUpBombasExtra; // Establecer como componente raíz
	}
}

// Called when the game starts or when spawned
void APowerUpBombasExtra::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APowerUpBombasExtra::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APowerUpBombasExtra::NotifyActorBeginOverlap(AActor* OtherActor)
{
	if (ACharacter* Jugador = Cast<ACharacter>(OtherActor))
	{
		ActivarPowerUp(Jugador);
		Destroy();
	}
}

void APowerUpBombasExtra::ActivarPowerUp(ACharacter* Jugador)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("TIENES BOMBAS EXTRA...........!!!"));
	// Aquí puedes agregar la lógica para aumentar el número de bombas del jugador
	// Por ejemplo, si tienes una variable BombasExtra en el jugador, podrías incrementarla aquí.
}

