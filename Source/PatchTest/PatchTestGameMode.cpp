// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "PatchTest.h"
#include "PatchTestGameMode.h"
#include "PatchTestPlayerController.h"
#include "PatchTestCharacter.h"

APatchTestGameMode::APatchTestGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = APatchTestPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}