// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueConcreto.h"
#include "Components/StaticMeshComponent.h"

ABloqueConcreto::ABloqueConcreto()
{

	//MATERIAL
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_CobbleStone_Rough.M_CobbleStone_Rough'"));
	if (MaterialAsset.Succeeded())
	{
		MeshBloque->SetMaterial(0, MaterialAsset.Object);
	}

	// Establece una escala personalizada desde la clase hija
	EstablecerEscala(FVector(3.5f, 3.5f, 3.5f));
}
