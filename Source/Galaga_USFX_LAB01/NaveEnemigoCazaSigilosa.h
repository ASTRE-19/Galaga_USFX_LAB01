// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigoCaza.h"
#include "NaveEnemigoCazaSigilosa.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB01_API ANaveEnemigoCazaSigilosa : public ANaveEnemigoCaza
{
	GENERATED_BODY()
public:
	ANaveEnemigoCazaSigilosa();
	virtual void Mover(float Deltatime) override; //Sobrescribir los metodos
	virtual void Atacar() override;
	void Detectar(); //Metodo propio
};
