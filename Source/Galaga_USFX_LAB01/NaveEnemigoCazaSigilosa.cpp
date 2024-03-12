// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoCazaSigilosa.h"


ANaveEnemigoCazaSigilosa::ANaveEnemigoCazaSigilosa()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}


void ANaveEnemigoCazaSigilosa::Mover() {
// Se mueve un poco mas rapido en su estado de sigilo
}

void ANaveEnemigoCazaSigilosa::Atacar() {
	//ataques mas rapidos en su estado de sigilo por un tiempo
}

void ANaveEnemigoCazaSigilosa::Detectar() {
	//Deja el sigilo cuando ataca
}