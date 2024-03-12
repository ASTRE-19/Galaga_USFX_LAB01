// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigoTransporte.h"
#include "NaveEnemigoTransporteLogistico.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB01_API ANaveEnemigoTransporteLogistico : public ANaveEnemigoTransporte
{
	GENERATED_BODY()
	
public:
	ANaveEnemigoTransporteLogistico();
	virtual void Mover() override; //Sobrescribir los metodos
	virtual void Escapar() override;
	virtual void Atacar() override;
	virtual void Destruirse() override;
	void entregarSuministros();// metodo propio
};
