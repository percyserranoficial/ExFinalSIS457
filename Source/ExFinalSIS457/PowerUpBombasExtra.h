// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IPowerUp.h"
#include "PowerUpBombasExtra.generated.h"

class UStaticMeshComponent;

UCLASS()
class EXFINALSIS457_API APowerUpBombasExtra : public AActor, public IIPowerUp
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APowerUpBombasExtra();

	UStaticMeshComponent* MeshPowerUpBombasExtra;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	virtual void ActivarPowerUp(ACharacter* Jugador) override;

};
