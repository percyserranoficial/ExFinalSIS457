// Fill out your copyright notice in the Description page of Project Settings.


#include "BombaConDobleExplosion.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "Engine/Engine.h"
#include "Bomba.h"

ABombaConDobleExplosion::ABombaConDobleExplosion()
{
	//PARTICULAS
	static ConstructorHelpers::FObjectFinder<UParticleSystem> EfectoAsset(TEXT("/Script/Engine.ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
	if (EfectoAsset.Succeeded())
	{
		EfectoSegundaExplosion = EfectoAsset.Object;
	}
}

void ABombaConDobleExplosion::Explotar()
{
	Super::Explotar();

	/*if (BombaOriginal)
	{
		BombaOriginal->Explotar();
	}*/

	// Aquí puedes agregar la lógica de la primera explosión

	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("ESPERANDO LA SEGUNDA EXPLOSION.........."));


	GetWorld()->GetTimerManager().SetTimer(TimerHandleSegundaExplosion, this, &ABombaConDobleExplosion::SegundaExplosion, 15.0f, false);
}

void ABombaConDobleExplosion::SegundaExplosion()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("SEGUNDA EXPLOSION!!!!"));

	

	if (EfectoSegundaExplosion)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), EfectoSegundaExplosion, GetActorLocation(), FRotator::ZeroRotator, true);
	}

	if (BombaOriginal)
	{
		AActor* ActorOriginal = Cast<AActor>(BombaOriginal.GetObject());
		if (ActorOriginal) ActorOriginal->Destroy();

	}
	Destroy(); // Destruye la bomba después de la segunda explosión
}
