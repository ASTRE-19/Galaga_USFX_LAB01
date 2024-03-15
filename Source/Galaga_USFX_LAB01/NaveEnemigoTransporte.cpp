// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoTransporte.h"

ANaveEnemigoTransporte::ANaveEnemigoTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigoTransporte::Mover(float DeltaTime)
{

}

void ANaveEnemigoTransporte::Disparar()
{
}

void ANaveEnemigoTransporte::Destruirse()
{

}

void ANaveEnemigoTransporte::Escapar()
{

}

void ANaveEnemigoTransporte::Atacar()
{

}