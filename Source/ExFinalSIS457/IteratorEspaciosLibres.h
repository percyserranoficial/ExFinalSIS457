// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IEspacioIterator.h"
#include "IteratorEspaciosLibres.generated.h"

UCLASS()
class EXFINALSIS457_API AIteratorEspaciosLibres : public AActor, public IIEspacioIterator
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AIteratorEspaciosLibres();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Inicializar(const TArray<FVector>& Posiciones);

	TArray<FVector> PosicionesLibres;
	int32 Indice;


	virtual bool HasNext() override;
	virtual FVector Next() override;
};
