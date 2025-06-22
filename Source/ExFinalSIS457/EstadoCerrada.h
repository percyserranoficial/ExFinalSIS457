// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IEstadoPuerta.h"
#include "EstadoCerrada.generated.h"

UCLASS()
class EXFINALSIS457_API AEstadoCerrada : public AActor, public IIEstadoPuerta
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoCerrada();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Ejecutar(class APuerta* Puerta) override;
};
