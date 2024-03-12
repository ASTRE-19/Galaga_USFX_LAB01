// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigo.h"
#include "NaveEnemigoReabastecimiento.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB01_API ANaveEnemigoReabastecimiento : public ANaveEnemigo
{
	GENERATED_BODY()
	
private:
	float velocidadReabasto; //Velocidad de Reabastecimiento
	float tiempoReabasto; //Tiempo de Reabastecimiento
	float radioReabasto; //Radio de reabastecimiento

public:
	ANaveEnemigoReabastecimiento();

	FORCEINLINE float GetVelocidadReabasto() const { return velocidad; }
	FORCEINLINE float GetTiempoReabasto() const { return tiempoReabasto; }
	FORCEINLINE float GetRadioReabasto() const { return radioReabasto; }

	FORCEINLINE void SetVelocidadReabasto(float _velocidadReabasto) { velocidadReabasto = _velocidadReabasto; }
	FORCEINLINE void SetTiempoReabasto(float _tiempoReabasto) { tiempoReabasto = _tiempoReabasto; }
	FORCEINLINE void SetRadioReabasto(float _radioReabasto) { radioReabasto = _radioReabasto; }

protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	virtual void Atacar();
};