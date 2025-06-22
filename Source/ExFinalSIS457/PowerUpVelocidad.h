// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IPowerUp.h"
#include "PowerUpVelocidad.generated.h"

class UStaticMeshComponent;

UCLASS()
class EXFINALSIS457_API APowerUpVelocidad : public AActor, public IIPowerUp
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APowerUpVelocidad();

	UStaticMeshComponent* MeshPowerUpVelocidad;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	virtual void ActivarPowerUp(ACharacter* Jugador) override;
};
