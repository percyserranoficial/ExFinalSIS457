// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IPowerUpFactory.h"
#include "PowerUpFactoryNormal.generated.h"

UCLASS()
class EXFINALSIS457_API APowerUpFactoryNormal : public AActor, public IIPowerUpFactory
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APowerUpFactoryNormal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual AActor* CrearPowerUpVelocidad(UWorld* World, FVector Posicion) override;
	virtual AActor* CrearPowerUpBombasExtra(UWorld* World, FVector Posicion) override;
};
