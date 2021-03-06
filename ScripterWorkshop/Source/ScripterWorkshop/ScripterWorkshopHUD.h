// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ScripterWorkshopHUD.generated.h"

UCLASS()
class AScripterWorkshopHUD : public AHUD
{
	GENERATED_BODY()

public:
	AScripterWorkshopHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

