// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoCaza.h"

ANaveEnemigoCaza::ANaveEnemigoCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);
	Timer = 0.0f;

}

void ANaveEnemigoCaza::Mover(float DeltaTime)
{
	//Obtiene la posición actual del actor
	FVector PosicionActual = GetActorLocation();

	//Actualizar Temporizador
	Timer += DeltaTime;


	//Genera coordenadas circulares
	/*float Radio = 10.0f;
	float Speed = 1.0f;*/
	float Amplitud = 20.0f;
	float Frecuencia = 2.0f;
	//Calculando la nueva posicion basado en movimento circular
	float NewX = GetActorLocation().X + Amplitud * FMath::Sin(Frecuencia * Timer);// + Radio * FMath::Cos(Speed * Timer);
	float NewY = GetActorLocation().Y;// + Radio * FMath::Sin(Speed * Timer);
	float NewZ = GetActorLocation().Z; //Mantenemos la posicion Z

	//Colocamos la nueva posicion
	SetActorLocation(FVector(NewX, NewY, NewZ));
}

void ANaveEnemigoCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigoCaza::Disparar()
{
}

void ANaveEnemigoCaza::Destruirse()
{

}

void ANaveEnemigoCaza::Escapar()
{

}

void ANaveEnemigoCaza::Atacar() 
{

}