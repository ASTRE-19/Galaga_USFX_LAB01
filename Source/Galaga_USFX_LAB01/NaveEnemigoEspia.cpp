// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoEspia.h"

ANaveEnemigoEspia::ANaveEnemigoEspia()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigoEspia::Mover()
{

}

void ANaveEnemigoEspia::Disparar()
{
}

void ANaveEnemigoEspia::Destruirse()
{

}

void ANaveEnemigoEspia::Escapar()
{

}

void ANaveEnemigoEspia::Atacar()
{

}