// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExFinalSIS457GameMode.h"
#include "ExFinalSIS457Character.h"
#include "UObject/ConstructorHelpers.h"
//Builder
#include "ConstructorLaberinto.h"
#include "DirectorLaberinto.h"

AExFinalSIS457GameMode::AExFinalSIS457GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AExFinalSIS457GameMode::BeginPlay()
{
	Super::BeginPlay();
	BuilderL();
}

void AExFinalSIS457GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void AExFinalSIS457GameMode::BuilderL()
{
	TArray<TArray<int32>> Matriz = {
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 1, 0, 3, 0, 0, 0, 2, 1, 0, 0, 1 },
	{ 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1 },
	{ 1, 0, 1, 0, 0, 0, 2, 0, 1, 0, 0, 0, 0, 2, 1 },
	{ 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1 },
	{ 1, 2, 0, 0, 1, 0, 0, 0, 3, 0, 0, 2, 1, 0, 1 },
	{ 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1 },
	{ 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1 },
	{ 1, 0, 1, 2, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1 },
	{ 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 3, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
	};


	UWorld* World = GetWorld();
	if (!World) return;

	ADirectorLaberinto* Director = World->SpawnActor<ADirectorLaberinto>();
	if (!Director) return;
	AConstructorLaberinto* Builder = World->SpawnActor<AConstructorLaberinto>();
	
	Director->BuilderAcero = AConstructorLaberinto::StaticClass();
	Director->BuilderMadera = AConstructorLaberinto::StaticClass();
	Director->BuilderConcreto = AConstructorLaberinto::StaticClass();

	if (Director)
	{
		Director->ConstruirLaberinto(World, Matriz, Builder);
	}

	TArray<FVector> PosicionesLibres = Builder->ObtenerPosicionesLibres();

}
