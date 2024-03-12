// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoEspiaInfiltrado.h"

ANaveEnemigoEspiaInfiltrado::ANaveEnemigoEspiaInfiltrado()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigoEspiaInfiltrado::Mover()
{

}

void ANaveEnemigoEspiaInfiltrado::Atacar()
{

}

void ANaveEnemigoEspiaInfiltrado::Escapar()
{

}


void ANaveEnemigoEspiaInfiltrado::CambiarDisfraz()
{

}

