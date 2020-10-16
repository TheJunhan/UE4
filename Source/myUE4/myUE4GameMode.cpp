// Copyright Epic Games, Inc. All Rights Reserved.

#include "myUE4GameMode.h"
#include "myUE4Character.h"
#include "UObject/ConstructorHelpers.h"

AmyUE4GameMode::AmyUE4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
