// Copyright Epic Games, Inc. All Rights Reserved.

#include "BasicMOBAGameMode.h"
#include "BasicMOBACharacter.h"
#include "UObject/ConstructorHelpers.h"

ABasicMOBAGameMode::ABasicMOBAGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
