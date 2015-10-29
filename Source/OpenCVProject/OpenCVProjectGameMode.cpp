// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "OpenCVProject.h"
#include "OpenCVProjectGameMode.h"
#include "OpenCVProjectHUD.h"
#include "OpenCVProjectCharacter.h"

AOpenCVProjectGameMode::AOpenCVProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AOpenCVProjectHUD::StaticClass();
}
