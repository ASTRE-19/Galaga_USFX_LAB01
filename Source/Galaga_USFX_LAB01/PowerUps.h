// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PowerUps.generated.h"

UCLASS()
class GALAGA_USFX_LAB01_API APowerUps : public AActor
{
	GENERATED_BODY()
private:
	float positionX;
	float positionY; //Coordenadas que representan la coordenada actual del power up
	int tipoPowerUp; 

	//Metodos accesores
public:
	FORCEINLINE float GetPositionX() const { return positionX; }
	FORCEINLINE void SetPositionX(float _positionX) { positionX = _positionX; }
	FORCEINLINE float GetPositionY() const { return positionY; }
	FORCEINLINE void SetPositionY(float _positionY) { positionY = _positionY; }
	FORCEINLINE float GetTipoPowerUp() const { return tipoPowerUp; }
	FORCEINLINE void SetTipoPowerUp(float _tipoPowerUp) { tipoPowerUp = _tipoPowerUp; }


	//Metodos
public:
	void efecto() {}; //Aplica el efecto del powerUpCuando es recogido
	void establecerPosicion(float nuevaX, float nuevaY) {};//Establece nueva posicion del escudo
	bool estaActivo() ;//Devuelve verdad si el poerUp aun esta activo

	
public:	
	// Sets default values for this actor's properties
	APowerUps();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
