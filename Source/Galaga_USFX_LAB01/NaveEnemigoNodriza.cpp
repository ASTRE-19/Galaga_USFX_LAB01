// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoNodriza.h"

ANaveEnemigoNodriza::ANaveEnemigoNodriza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigoNodriza::Mover()
{

}

void ANaveEnemigoNodriza::Disparar()
{
}

void ANaveEnemigoNodriza::Destruirse()
{

}

void ANaveEnemigoNodriza::Escapar()
{

}

void ANaveEnemigoNodriza::Atacar()
{

}