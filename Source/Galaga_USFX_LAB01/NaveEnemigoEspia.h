// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigo.h"
#include "NaveEnemigoEspia.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB01_API ANaveEnemigoEspia : public ANaveEnemigo
{
	GENERATED_BODY()

private:
	float duracionInvisibilidad;
	FString tipoCamuflaje;

public:
	ANaveEnemigoEspia();

	FORCEINLINE float GetDuracionInvisibilidad() const { return duracionInvisibilidad; }
	FORCEINLINE FString GetTipoCamuflaje() const { return tipoCamuflaje; }

	FORCEINLINE void SetResistencia(float _duracionInvisibilidad) { duracionInvisibilidad = _duracionInvisibilidad; }
	FORCEINLINE void SetNombre(FString _tipoCamuflaje) { tipoCamuflaje = _tipoCamuflaje; }
	
protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	virtual void Atacar();
};
