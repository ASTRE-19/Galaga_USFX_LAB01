// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoNodrizaTactica.h"

ANaveEnemigoNodrizaTactica::ANaveEnemigoNodrizaTactica()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigoNodrizaTactica::Mover()
{

}

void ANaveEnemigoNodrizaTactica::DesplegarTropas()
{

}