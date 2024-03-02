// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_LAB01GameMode.generated.h"

class ANaveEnemigo;

UCLASS(MinimalAPI)
class AGalaga_USFX_LAB01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_LAB01GameMode();


public:
	ANaveEnemigo* NaveEnemiga01;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};


