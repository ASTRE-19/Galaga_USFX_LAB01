// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoTransporteLogistico.h"

ANaveEnemigoTransporteLogistico::ANaveEnemigoTransporteLogistico()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigoTransporteLogistico::Mover() {

}

void ANaveEnemigoTransporteLogistico::Escapar() {

}

void ANaveEnemigoTransporteLogistico::Atacar() {

}

void ANaveEnemigoTransporteLogistico::Destruirse() {

}

void ANaveEnemigoTransporteLogistico::entregarSuministros() {

}