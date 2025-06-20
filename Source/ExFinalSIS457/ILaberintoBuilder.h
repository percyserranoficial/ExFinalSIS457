// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ILaberintoBuilder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UILaberintoBuilder : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class EXFINALSIS457_API IILaberintoBuilder
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void Reset() = 0;
	virtual void ConstruirBloqueAcero(UWorld* World,FVector Posicion) = 0;	
	virtual void ConstruirBloqueMadera(UWorld* World, FVector Posicion) = 0;
	virtual void ConstruirBloqueConcreto(UWorld* World, FVector Posicion) = 0;
	virtual void RegistrarPosicionLibre(FVector Posicion) = 0;
	virtual TArray<FVector> ObtenerPosicionesLibres() const = 0;
};
