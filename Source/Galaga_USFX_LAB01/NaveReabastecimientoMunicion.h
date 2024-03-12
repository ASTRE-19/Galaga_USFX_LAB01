// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigoReabastecimiento.h"
#include "NaveReabastecimientoMunicion.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB01_API ANaveReabastecimientoMunicion : public ANaveEnemigoReabastecimiento
{
	GENERATED_BODY()
public:
	ANaveReabastecimientoMunicion();
	virtual void Mover() override; //Sobrescribir los metodos
	void RecargarMunicion(); //Metodo propio
};
