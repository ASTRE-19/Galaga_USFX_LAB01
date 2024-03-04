// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Nivel.generated.h"


UCLASS()
class GALAGA_USFX_LAB01_API ANivel : public AActor
{
	GENERATED_BODY()
private:
	int numeroNivel;//Numero de Nivel
	int numeroEnemigos; //Numero de enemigos que apareceran
	

	//Metodos accesores
public:
	FORCEINLINE int GetnumeroNivel() const { return numeroNivel; }
	FORCEINLINE void SetnumeroNIvel(int _numeroNivel) { numeroNivel = _numeroNivel; }
	FORCEINLINE int GetnumeroEnemigo() const { return numeroEnemigos; }
	FORCEINLINE void SetnumeroEnemigo(int _numeroEnemigo) { numeroEnemigos = _numeroEnemigo; }
	


	//Metodos
public:
	void cargarNivel() {}; //Carga la configuracion de enemigos y otros parametros especificos del nivel
	void addEnemigo() {};//Añade una configuracion de enemigo a nivel
	

	
public:	
	// Sets default values for this actor's properties
	ANivel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
