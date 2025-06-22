// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBomba.h"
#include "Bomba.generated.h"

class UStaticMeshComponent;
class UParticleSystem;

UCLASS()
class EXFINALSIS457_API ABomba : public AActor, public IIBomba
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABomba();

	UStaticMeshComponent* MeshBomba;
	UPROPERTY(EditAnywhere)
	UParticleSystem* EfectoExplosion;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	// DECORATOR

	virtual void Explotar() override;

	//UPROPERTY(EditAnywhere)
	float TiempoExplosion = 5.0f;

	FTimerHandle TimerExplosion;
};
