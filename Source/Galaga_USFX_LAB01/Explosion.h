// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Explosion.generated.h"

UCLASS()
class GALAGA_USFX_LAB01_API AExplosion : public AActor
{
	GENERATED_BODY()
	
private:
	float positionX;
	float positionY; //Coordenadas que representan la coordenada actual de la explosion

	//Metodos accesores
public:
	FORCEINLINE float GetPositionX() const { return positionX; }
	FORCEINLINE void SetPositionX(float _positionX) { positionX = _positionX; }
	FORCEINLINE float GetPositionY() const { return positionY; }
	FORCEINLINE void SetPositionY(float _positionY) { positionY = _positionY; }
	//Metodos
public:
	void expandir() {}; //Realiza la animacion de explosion
	void establecerPosicion(float nuevaX, float nuevaY) {};//Establece nueva posicion

public:	
	// Sets default values for this actor's properties
	AExplosion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
