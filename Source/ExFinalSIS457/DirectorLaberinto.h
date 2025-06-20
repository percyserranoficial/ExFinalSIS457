// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILaberintoBuilder.h"
#include "DirectorLaberinto.generated.h"

UCLASS()
class EXFINALSIS457_API ADirectorLaberinto : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirectorLaberinto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	void ConstruirLaberinto(UWorld* World, const TArray<TArray<int32>>& Matriz, IILaberintoBuilder* Builder);
	TSubclassOf<AActor> BuilderConcreto;
	TSubclassOf<AActor> BuilderMadera;
	TSubclassOf<AActor> BuilderAcero;

};
