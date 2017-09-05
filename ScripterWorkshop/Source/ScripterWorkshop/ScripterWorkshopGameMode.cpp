// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ScripterWorkshopGameMode.h"
#include "ScripterWorkshopHUD.h"
#include "ScripterWorkshopCharacter.h"
#include "UObject/ConstructorHelpers.h"

AScripterWorkshopGameMode::AScripterWorkshopGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AScripterWorkshopHUD::StaticClass();
}
