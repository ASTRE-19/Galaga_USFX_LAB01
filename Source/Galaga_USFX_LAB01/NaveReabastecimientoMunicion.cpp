// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveReabastecimientoMunicion.h"

ANaveReabastecimientoMunicion::ANaveReabastecimientoMunicion()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveReabastecimientoMunicion::Mover()
{

}

void ANaveReabastecimientoMunicion::RecargarMunicion()
{

}