// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILaberintoBuilder.h"
#include "Bloque.h"
#include "ConstructorLaberinto.generated.h"

class ABloqueAcero;
class ABloqueConcreto;
class ABloqueMadera;

UCLASS()
class EXFINALSIS457_API AConstructorLaberinto : public AActor, public IILaberintoBuilder
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConstructorLaberinto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	ABloque* Bloque;

	/*TSubclassOf<AActor> ClaseBloqueAcero;
	TSubclassOf<AActor> ClaseBloqueMadera;
    TSubclassOf<AActor> ClaseBloqueConcreto;*/
	

	TArray<FVector> PosicionesLibres;

public:

	virtual void Reset() override;
	virtual void ConstruirBloqueAcero(UWorld* World, FVector Posicion) override;
	virtual void ConstruirBloqueMadera(UWorld* World, FVector Posicion) override;
	virtual void ConstruirBloqueConcreto(UWorld* World, FVector Posicion) override;
	virtual void RegistrarPosicionLibre(FVector Posicion) override;
	virtual TArray<FVector> ObtenerPosicionesLibres() const override;
};
