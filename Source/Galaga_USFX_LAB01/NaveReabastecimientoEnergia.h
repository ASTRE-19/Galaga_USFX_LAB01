// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigoReabastecimiento.h"
#include "NaveReabastecimientoEnergia.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB01_API ANaveReabastecimientoEnergia : public ANaveEnemigoReabastecimiento
{
	GENERATED_BODY()
public:
	ANaveReabastecimientoEnergia();
	virtual void Mover() override; //Sobrescribir los metodos
	virtual void Escapar() override;
	void RecargarEnergia(); //Metodo propio
};
