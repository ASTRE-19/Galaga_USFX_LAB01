// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigoTransporte.h"
#include "NaveEnemigoTransporteFurtivo.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB01_API ANaveEnemigoTransporteFurtivo : public ANaveEnemigoTransporte
{
	GENERATED_BODY()
 public:
	 ANaveEnemigoTransporteFurtivo();
	 virtual void Destruirse() override; //Otra forma de destruirse
	 void evitarRadares();
	 virtual void Mover() override; //Otra forma de Moverse
};
