// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigoNodriza.h"
#include "NaveEnemigoNodrizaBlindado.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB01_API ANaveEnemigoNodrizaBlindado : public ANaveEnemigoNodriza
{
	GENERATED_BODY()
public:
	ANaveEnemigoNodrizaBlindado();
	virtual void Mover(float DeltaTime) override; //Sobrescribir los metodos
	void ActivarEscudo(); //Metodo propio
};
