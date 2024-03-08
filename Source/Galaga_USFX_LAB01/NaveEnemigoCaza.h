// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigo.h"
#include "NaveEnemigoCaza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB01_API ANaveEnemigoCaza : public ANaveEnemigo
{
	GENERATED_BODY()
public:
	ANaveEnemigoCaza(); //costructor
	
private:
	int cantidadBombas;

public:
	FORCEINLINE int GetCantidadBombas() const { return cantidadBombas; }
	FORCEINLINE void SetCantidadBombas(int _cantidadBombas) { cantidadBombas = _cantidadBombas; }
protected:
	virtual void Mover();
	virtual void Disparar();
};
