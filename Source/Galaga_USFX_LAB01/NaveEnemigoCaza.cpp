// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoCaza.h"

ANaveEnemigoCaza::ANaveEnemigoCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigoCaza::Mover()
{

}

void ANaveEnemigoCaza::Disparar()
{
}

void ANaveEnemigoCaza::Destruirse()
{

}

void ANaveEnemigoCaza::Escapar()
{

}

void ANaveEnemigoCaza::Atacar() 
{

}