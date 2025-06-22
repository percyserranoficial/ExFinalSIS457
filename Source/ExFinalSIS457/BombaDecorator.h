// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBomba.h"
#include "BombaDecorator.generated.h"

UCLASS()
class EXFINALSIS457_API ABombaDecorator : public AActor, public IIBomba
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABombaDecorator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
	TScriptInterface<IIBomba> BombaOriginal;

	void SetBombaDecorada(TScriptInterface<IIBomba> NuevaBomba);
	virtual void Explotar() override;
};
