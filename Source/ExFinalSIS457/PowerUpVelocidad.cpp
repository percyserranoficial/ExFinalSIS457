// Fill out your copyright notice in the Description page of Project Settings.


#include "PowerUpVelocidad.h"
#include "GameFramework/Character.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Engine.h"

// Sets default values
APowerUpVelocidad::APowerUpVelocidad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SetActorScale3D(FVector(1.0f));

	//Malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	MeshPowerUpVelocidad = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshPowerUpVelocidad"));
	if (MeshAsset.Succeeded())
	{
		MeshPowerUpVelocidad->SetStaticMesh(MeshAsset.Object);
		MeshPowerUpVelocidad->SetRelativeScale3D(FVector(0.5f)); // Ajustar escala de la malla
		RootComponent = MeshPowerUpVelocidad; // Establecer como componente raíz
	}

}

// Called when the game starts or when spawned
void APowerUpVelocidad::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APowerUpVelocidad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APowerUpVelocidad::NotifyActorBeginOverlap(AActor* OtherActor)
{
	if (ACharacter* Jugador = Cast<ACharacter>(OtherActor))
	{
		ActivarPowerUp(Jugador);
		Destroy();
	}
}

void APowerUpVelocidad::ActivarPowerUp(ACharacter* Jugador)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("TIENES MAS VELOCIDAD...........!!!"));
}

