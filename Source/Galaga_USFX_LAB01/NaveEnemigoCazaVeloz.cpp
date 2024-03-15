// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoCazaVeloz.h"

ANaveEnemigoCazaVeloz::ANaveEnemigoCazaVeloz()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigoCazaVeloz::Mover(float DeltaTime) {
	//movimiento mas rapido
}

void ANaveEnemigoCazaVeloz::Escapar() {

}

void ANaveEnemigoCazaVeloz::Atacar() {
//ataques mas rapidos
}

void ANaveEnemigoCazaVeloz::Destruirse() {

}