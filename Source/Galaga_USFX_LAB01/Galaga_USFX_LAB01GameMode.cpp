// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_LAB01GameMode.h"
#include "Galaga_USFX_LAB01Pawn.h"
#include "NaveEnemigo.h"
#include "NaveEnemigoCaza.h"
#include "NaveEnemigoTransporte.h"
#include "NaveEnemigoEspia.h"
#include "NaveEnemigoReabastecimiento.h"
#include "NaveEnemigoNodriza.h"
#include "NaveEnemigoTransporteFurtivo.h"
#include "NaveEnemigoTransporteLogistico.h"
#include "NaveEnemigoCazaSigilosa.h"
#include "NaveEnemigoCazaVeloz.h"
#include "NaveEnemigoEspiaTactico.h"
#include "NaveEnemigoEspiaInfiltrado.h"
#include "NaveReabastecimientoEnergia.h"
#include "NaveReabastecimientoMunicion.h"
#include "NaveEnemigoNodrizaBlindado.h"
#include "NaveEnemigoNodrizaTactica.h"

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
	//posiciones para NaveTransporte
	FVector ubicacionNaveTrans = FVector(-750.0f, 600.0f, 197.0f);
	FVector ubicacionNaveTrans2 = FVector(-750.0f, 300.0f, 197.0f);
	FVector ubicacionNaveTransFur = FVector(-750.0f, 900.0f, 197.0f);
	FVector ubicacionNaveTranslog = FVector(-750.0f, 1200.0f, 197.0f);

	//Posiciones para NaveCaza
	FVector ubicacionNaveCaza = FVector(-500.0f, 600.0f, 197.0f);
	FVector ubicacionNaveCaza2 = FVector(-500.0f, 300.0f, 197.0f);
	FVector ubicacionNaveCazaSig = FVector(-500.0f, 900.0f, 197.0f);
	FVector ubicacionNaveCazaVel = FVector(-500.0f, 1200.0f, 197.0f);

	//Posiciones para NaveEspia
	FVector ubicacionNaveEspia = FVector(-250.0f, 600.0f, 197.0f);
	FVector ubicacionNaveEspia2 = FVector(-250.0f, 300.0f, 197.0f);
	FVector ubicacionNaveEspiaTac = FVector(-250.0f, 900.0f, 197.0f);
	FVector ubicacionNaveEspiaInf = FVector(-250.0f, 1200.0f, 197.0f);



	//Posiciones para NaveReabastecimiento
	FVector ubicacionNaveReabasto = FVector(0.0f, 600.0f, 197.0f);
	FVector ubicacionNaveReabasto2 = FVector(0.0f, 300.0f, 197.0f);
	FVector ubicacionNaveReaMun = FVector(0.0f, 900.0f, 197.0f);
	FVector ubicacionNaveReaEne = FVector(0.0f, 1200.0f, 197.0f);

	//Posiciones para NaveNodriza
	FVector ubicacionNaveNodriza = FVector(-1000.0f, 600.0f, 197.0f);
	FVector ubicacionNaveNodriza2 = FVector(-1000.0f, 300.0f, 197.0f);
	FVector ubicacionNaveNodTac = FVector(-1000.0f, 900.0f, 197.0f);
	FVector ubicacionNaveNodBli = FVector(-1000.0f, 1200.0f, 197.0f);




	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the naves
		//naves Transporte
		NaveEnemigoTransporte01 = World->SpawnActor<ANaveEnemigoTransporte>(ubicacionNaveTrans, rotacionNave);
		NaveEnemigoTransporte01 = World->SpawnActor<ANaveEnemigoTransporte>(ubicacionNaveTrans2, rotacionNave);
		NaveTransporteFurtivo01 = World->SpawnActor<ANaveEnemigoTransporteFurtivo>(ubicacionNaveTransFur, rotacionNave);
		NaveTransporteLogistico01 = World->SpawnActor<ANaveEnemigoTransporteLogistico>(ubicacionNaveTranslog, rotacionNave);

		//Naves Caza
		NaveEnemigoCaza01 = World->SpawnActor<ANaveEnemigoCaza>(ubicacionNaveCaza, rotacionNave);
		NaveEnemigoCaza01 = World->SpawnActor<ANaveEnemigoCaza>(ubicacionNaveCaza2, rotacionNave);
		NaveCazaSigilo01 = World->SpawnActor<ANaveEnemigoCazaSigilosa>(ubicacionNaveCazaSig, rotacionNave);
		NaveCazaVeloz01 = World->SpawnActor<ANaveEnemigoCazaVeloz>(ubicacionNaveCazaVel, rotacionNave);

		//Naves Espia
		NaveEnemigoEspia01 = World->SpawnActor<ANaveEnemigoEspia>(ubicacionNaveEspia, rotacionNave);
		NaveEnemigoEspia01 = World->SpawnActor<ANaveEnemigoEspia>(ubicacionNaveEspia2, rotacionNave);
		NaveEspiaTactico01 = World->SpawnActor<ANaveEnemigoEspiaTactico>(ubicacionNaveEspiaTac, rotacionNave);
		NaveEspiaInfiltrado01 = World->SpawnActor<ANaveEnemigoEspiaInfiltrado>(ubicacionNaveEspiaInf, rotacionNave);

		//Naves de Reabastecimiento
		NaveEnemigoReabasto01 = World->SpawnActor<ANaveEnemigoReabastecimiento>(ubicacionNaveReabasto, rotacionNave);
		NaveEnemigoReabasto01 = World->SpawnActor<ANaveEnemigoReabastecimiento>(ubicacionNaveReabasto2, rotacionNave);
		NaveReabastoMunicion01 = World->SpawnActor<ANaveReabastecimientoMunicion>(ubicacionNaveReaMun, rotacionNave);
		NaveReabastoEnergia01 = World->SpawnActor<ANaveReabastecimientoEnergia>(ubicacionNaveReaEne, rotacionNave);

		//Naves Nodriza
		NaveEnemigoNodriza01 = World->SpawnActor<ANaveEnemigoNodriza>(ubicacionNaveNodriza, rotacionNave);
		NaveEnemigoNodriza01 = World->SpawnActor<ANaveEnemigoNodriza>(ubicacionNaveNodriza2, rotacionNave);
		NaveNodrizaBlindado01 = World->SpawnActor<ANaveEnemigoNodrizaBlindado>(ubicacionNaveNodBli, rotacionNave);
		NaveNodrizaTactica01 = World->SpawnActor<ANaveEnemigoNodrizaTactica>(ubicacionNaveNodTac, rotacionNave);
	}
	

	//NaveEnemiga01->SetPosicion(FVector(2000.0f,0.0f,120.0f));
	NaveEnemigoCaza01->SetPosicion(FVector(-500.0f, 500.0f, 200.0f));
	NaveEnemigoTransporte01->SetPosicion(FVector(500.0f, -500.0f, 200.0f));
	NaveEnemigoEspia01->SetPosicion(FVector(500.0f, -500.0f, 200.0f));
	NaveEnemigoReabasto01->SetPosicion(FVector(500.0f, -500.0f, 200.0f));
	NaveEnemigoNodriza01->SetPosicion(FVector(500.0f, -500.0f, 200.0f));
}
