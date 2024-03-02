// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigo.h"

// Sets default values
ANaveEnemigo::ANaveEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	// Create the mesh component
	NaveEnemigaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);
	NaveEnemigaMesh->SetupAttachment(RootComponent);
	RootComponent = NaveEnemigaMesh;

}

// Called when the game starts or when spawned
void ANaveEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

