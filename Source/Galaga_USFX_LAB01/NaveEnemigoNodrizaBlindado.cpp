// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoNodrizaBlindado.h"

ANaveEnemigoNodrizaBlindado::ANaveEnemigoNodrizaBlindado()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigoNodrizaBlindado::Mover(float DeltaTime)
{

}

void ANaveEnemigoNodrizaBlindado::ActivarEscudo()
{

}