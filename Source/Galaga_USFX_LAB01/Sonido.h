// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sonido.generated.h"

UCLASS()
class GALAGA_USFX_LAB01_API ASonido : public AActor
{
	GENERATED_BODY()

public:
	void reproducirDisparo(); //Reproduce el sonido de un disparo
	void reproducirExplosion(); //Reproduce el sonido de una explosion
	void reproducirMusicaFondo(); //Reproduce la musica de fondo durante el juego
	
public:	
	// Sets default values for this actor's properties
	ASonido();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
