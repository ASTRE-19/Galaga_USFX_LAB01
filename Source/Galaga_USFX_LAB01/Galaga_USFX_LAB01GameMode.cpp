// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_LAB01GameMode.h"
#include "Galaga_USFX_LAB01Pawn.h"
#include "NaveEnemigo.h"
#include "NaveEnemigoCaza.h"
#include "NaveEnemigoTransporte.h"

AGalaga_USFX_LAB01GameMode::AGalaga_USFX_LAB01GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_LAB01Pawn::StaticClass();

	//NaveEnemiga01 = nullptr;

}

void AGalaga_USFX_LAB01GameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing

	FVector ubicacionNave01 = FVector(-1000.0f, 500.0f, 197.0f);
	FVector ubicacionNave02 = FVector(-500.0f, -500.0f, 197.0f);

	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		NaveEnemigoTransporte01 = World->SpawnActor<ANaveEnemigoTransporte>(ubicacionNave01, rotacionNave);
		NaveEnemigoCaza01 = World->SpawnActor<ANaveEnemigoCaza>(ubicacionNave02, rotacionNave);
	}

	//NaveEnemiga01->SetPosicion(FVector(2000.0f,0.0f,120.0f));
	NaveEnemigoCaza01->SetPosicion(FVector(-500.0f, 500.0f, 200.0f));
	NaveEnemigoTransporte01->SetPosicion(FVector(500.0f, -500.0f, 200.0f));
}
