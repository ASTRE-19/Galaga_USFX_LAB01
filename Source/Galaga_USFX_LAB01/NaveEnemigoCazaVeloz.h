// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigoCaza.h"
#include "NaveEnemigoCazaVeloz.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB01_API ANaveEnemigoCazaVeloz : public ANaveEnemigoCaza
{
	GENERATED_BODY()

public:
	ANaveEnemigoCazaVeloz();
	virtual void Mover() override; //Sobrescribir los metodos
	virtual void Escapar() override;
	virtual void Atacar() override;
	virtual void Destruirse() override;
	
};
