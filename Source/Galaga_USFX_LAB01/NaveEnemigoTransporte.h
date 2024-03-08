// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigo.h"
#include "NaveEnemigoTransporte.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB01_API ANaveEnemigoTransporte : public ANaveEnemigo
{
	GENERATED_BODY()
	
private:
	float capacidadCargaPeso;
	float capacidadCargaVolumen;


public:
	ANaveEnemigoTransporte();
	FORCEINLINE float GetCapacidadCargaPeso() const { return capacidadCargaPeso; }
	FORCEINLINE void SetCapacidadCargaPeso(float capacidad) { capacidadCargaPeso = capacidad; }
	FORCEINLINE float GetCapacidadCargaVolumen() const { return capacidadCargaVolumen; }
	FORCEINLINE void SetCapacidadCargaVolumen(float capacidad) { capacidadCargaVolumen = capacidad; }
protected:
	virtual void Mover();
	virtual void Disparar();
};
