// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueAcero.h"
#include "Components/StaticMeshComponent.h"

ABloqueAcero::ABloqueAcero()
{

	//MATERIAL
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Burnished_Steel.M_Metal_Burnished_Steel'"));
	if (MaterialAsset.Succeeded())
	{
		MeshBloque->SetMaterial(0, MaterialAsset.Object);
	}

	// Establece una escala personalizada desde la clase hija
	EstablecerEscala(FVector(3.5f, 3.5f, 3.5f));
}
