// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TestingGrounds_FPSGameMode.h"
#include "TestingGrounds_FPSHUD.h"
#include "TestingGrounds_FPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestingGrounds_FPSGameMode::ATestingGrounds_FPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestingGrounds_FPSHUD::StaticClass();
}
