// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Escudo.generated.h"

UCLASS()
class GALAGA_USFX_LAB01_API AEscudo : public AActor
{
	GENERATED_BODY()
	
private:
	float positionX;
	float positionY; //Coordenadas que representan la coordenada actual del escudo
	int resistencia; //Cuantos disparos puede resistir

	//Metodos accesores
public:
	FORCEINLINE float GetPositionX() const { return positionX; }
	FORCEINLINE void SetPositionX(float _positionX) { positionX = _positionX; }
	FORCEINLINE float GetPositionY() const { return positionY; }
	FORCEINLINE void SetPositionY(float _positionY) { positionY = _positionY; }
	FORCEINLINE float GetResistencia() const { return resistencia; }
	FORCEINLINE void SetResistencia(float _resistencia) { resistencia = _resistencia; }

	
	//Metodos
public:
	void disminuirResistencia() {}; //Disminuye la resistencia del escudo cuando recibe un disparo
	void establecerPosicion(float nuevaX, float nuevaY) {};//Establece nueva posicion del escudo
	bool estaActivo() { return true; };//Devuelve verdad si el escudo aun esta activo

public:	
	// Sets default values for this actor's properties
	AEscudo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
