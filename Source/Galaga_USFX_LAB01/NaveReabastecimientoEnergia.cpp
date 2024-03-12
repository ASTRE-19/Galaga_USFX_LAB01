// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveReabastecimientoEnergia.h"

ANaveReabastecimientoEnergia::ANaveReabastecimientoEnergia()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveReabastecimientoEnergia::Mover()
{

}

void ANaveReabastecimientoEnergia::Escapar()
{

}

void ANaveReabastecimientoEnergia::RecargarEnergia()
{

}