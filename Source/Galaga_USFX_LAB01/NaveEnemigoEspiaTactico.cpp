// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoEspiaTactico.h"

ANaveEnemigoEspiaTactico::ANaveEnemigoEspiaTactico()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigoEspiaTactico::Mover()
{

}

void ANaveEnemigoEspiaTactico::Atacar()
{

}

void ANaveEnemigoEspiaTactico::RecopilarInformacion()
{

}