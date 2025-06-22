// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BombaDecorator.h"
#include "BombaConDobleExplosion.generated.h"
class UParticleSystem;
/**
 * 
 */
UCLASS()
class EXFINALSIS457_API ABombaConDobleExplosion : public ABombaDecorator
{
	GENERATED_BODY()
	
public:
	ABombaConDobleExplosion();

	virtual void Explotar() override;

	void SegundaExplosion();

	//DECLARAR EL TIMER HANDLE
	FTimerHandle TimerHandleSegundaExplosion;

	UParticleSystem* EfectoSegundaExplosion;
};
