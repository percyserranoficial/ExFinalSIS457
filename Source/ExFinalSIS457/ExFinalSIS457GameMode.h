// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ExFinalSIS457GameMode.generated.h"

UCLASS(minimalapi)
class AExFinalSIS457GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AExFinalSIS457GameMode();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	//PATRONES

	void BuilderL();
	void DecoratorB();
	TArray<FVector> PosicionesLibres;
};



