// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigoEspia.h"
#include "NaveEnemigoEspiaInfiltrado.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB01_API ANaveEnemigoEspiaInfiltrado : public ANaveEnemigoEspia
{
	GENERATED_BODY()

public:
	ANaveEnemigoEspiaInfiltrado();
	virtual void Mover(float DeltaTime) override; //Sobrescribir los metodos
	virtual void Atacar() override;
	virtual void Escapar() override;
	void CambiarDisfraz(); //Metodo propio
	
};
