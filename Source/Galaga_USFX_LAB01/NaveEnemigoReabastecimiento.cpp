// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoReabastecimiento.h"

ANaveEnemigoReabastecimiento::ANaveEnemigoReabastecimiento()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigoReabastecimiento::Mover()
{

}

void ANaveEnemigoReabastecimiento::Disparar()
{
}

void ANaveEnemigoReabastecimiento::Destruirse()
{

}

void ANaveEnemigoReabastecimiento::Escapar()
{

}

void ANaveEnemigoReabastecimiento::Atacar()
{

}