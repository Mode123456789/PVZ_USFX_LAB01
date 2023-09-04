// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PVZ_USFX_LAB001GameMode.generated.h"

UCLASS(MinimalAPI)

class APVZ_USFX_LAB001GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	APVZ_USFX_LAB001GameMode();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};




