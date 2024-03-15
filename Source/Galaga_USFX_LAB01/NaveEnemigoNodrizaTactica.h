// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigoNodriza.h"
#include "NaveEnemigoNodrizaTactica.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB01_API ANaveEnemigoNodrizaTactica : public ANaveEnemigoNodriza
{
	GENERATED_BODY()
public:
	ANaveEnemigoNodrizaTactica();
	virtual void Mover(float DeltaTime) override; //Sobrescribir los metodos
	void DesplegarTropas(); //Metodo propio
};
