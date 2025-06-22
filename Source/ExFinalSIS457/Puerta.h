// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IEstadoPuerta.h"
#include "Puerta.generated.h"

class UStaticMeshComponent;

UCLASS()
class EXFINALSIS457_API APuerta : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APuerta();

	UStaticMeshComponent* MeshPuerta;

	UMaterialInterface* MaterialCerrada;
	UMaterialInterface* MaterialAbierta;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
	TScriptInterface<IIEstadoPuerta> EstadoActual;

	void CambiarEstado(TScriptInterface<IIEstadoPuerta> NuevoEstado);

};
