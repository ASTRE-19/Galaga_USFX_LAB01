// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_LAB01GameMode.generated.h"

//class ANaveEnemigo;

class ANaveEnemigoTransporte;
class ANaveEnemigoCaza;
class ANaveEnemigoEspia;
class ANaveEnemigoReabastecimiento;
class ANaveEnemigoNodriza;
class ANaveEnemigoTransporteFurtivo;
class ANaveEnemigoTransporteLogistico;
class ANaveEnemigoCazaSigilosa;
class ANaveEnemigoCazaVeloz;
class ANaveEnemigoEspiaTactico;
class ANaveEnemigoEspiaInfiltrado;
class ANaveReabastecimientoEnergia;
class ANaveReabastecimientoMunicion;
class ANaveEnemigoNodrizaTactica;
class ANaveEnemigoNodrizaBlindado;


UCLASS(MinimalAPI)
class AGalaga_USFX_LAB01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_LAB01GameMode();


public:
	//ANaveEnemigo* NaveEnemiga01;
	ANaveEnemigoTransporte* NaveEnemigoTransporte01;
	ANaveEnemigoCaza* NaveEnemigoCaza01;
	ANaveEnemigoEspia* NaveEnemigoEspia01;
	ANaveEnemigoReabastecimiento* NaveEnemigoReabasto01;
	ANaveEnemigoNodriza* NaveEnemigoNodriza01;
	ANaveEnemigoTransporteFurtivo* NaveTransporteFurtivo01;
	ANaveEnemigoTransporteLogistico* NaveTransporteLogistico01;
	ANaveEnemigoCazaSigilosa* NaveCazaSigilo01;
	ANaveEnemigoCazaVeloz* NaveCazaVeloz01;
	ANaveEnemigoEspiaTactico* NaveEspiaTactico01;
	ANaveEnemigoEspia* NaveEspiaInfiltrado01;
	ANaveReabastecimientoEnergia* NaveReabastoEnergia01;
	ANaveReabastecimientoMunicion* NaveReabastoMunicion01;
	ANaveEnemigoNodrizaBlindado* NaveNodrizaBlindado01;
	ANaveEnemigoNodrizaTactica* NaveNodrizaTactica01;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};



