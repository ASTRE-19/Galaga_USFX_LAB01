// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ControladorColiciones.generated.h"

UCLASS()
class GALAGA_USFX_LAB01_API AControladorColiciones : public AActor
{
	GENERATED_BODY()

public:
	void detectarColisiones(); //Comprueba si ha ocurrido alguna colicion
	void manejarColisionEneemigo(); //Maneja la colision de la nave enemigo con otros elementos
	void manejarColisionDisparo(); //Maneja la colision de un disparo con otros elementos
	
public:	
	// Sets default values for this actor's properties
	AControladorColiciones();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
