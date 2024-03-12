// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoTransporteFurtivo.h"

ANaveEnemigoTransporteFurtivo::ANaveEnemigoTransporteFurtivo()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigoTransporteFurtivo:: evitarRadares() {

}

void ANaveEnemigoTransporteFurtivo::Destruirse() {
	//polimorfismo
}

void ANaveEnemigoTransporteFurtivo::Mover() {
	//polimorfismo para mover()
}

