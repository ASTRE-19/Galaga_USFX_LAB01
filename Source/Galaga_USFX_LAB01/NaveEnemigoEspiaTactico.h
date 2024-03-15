// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigoEspia.h"
#include "NaveEnemigoEspiaTactico.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB01_API ANaveEnemigoEspiaTactico : public ANaveEnemigoEspia
{
	GENERATED_BODY()

public:
	ANaveEnemigoEspiaTactico();
	virtual void Mover(float DeltaTime) override; //Sobrescribir los metodos
	virtual void Atacar() override;
	void RecopilarInformacion(); //Metodo propio
	
};
