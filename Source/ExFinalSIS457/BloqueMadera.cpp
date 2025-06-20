// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueMadera.h"
#include "Components/StaticMeshComponent.h"

ABloqueMadera::ABloqueMadera()
{
	
	//MATERIAL
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Wood_Floor_Walnut_Polished.M_Wood_Floor_Walnut_Polished'"));
	if (MaterialAsset.Succeeded())
	{
		MeshBloque->SetMaterial(0, MaterialAsset.Object);
	}

	// Establece una escala personalizada desde la clase hija
	EstablecerEscala(FVector(3.0f, 3.0f, 3.0f));
}
