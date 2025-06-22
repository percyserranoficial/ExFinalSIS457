// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IPowerUpFactory.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIPowerUpFactory : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class EXFINALSIS457_API IIPowerUpFactory
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual AActor* CrearPowerUpVelocidad(UWorld* World, FVector Posicion) = 0;
	virtual AActor* CrearPowerUpBombasExtra(UWorld* World, FVector Posicion) = 0;
};
