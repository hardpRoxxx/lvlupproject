// Copyright Epic Games, Inc. All Rights Reserved.

#include "LvlUpProjectGameMode.h"
#include "LvlUpProjectHUD.h"
#include "LvlUpProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALvlUpProjectGameMode::ALvlUpProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALvlUpProjectHUD::StaticClass();
}
