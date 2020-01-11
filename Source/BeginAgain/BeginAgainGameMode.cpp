// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "BeginAgainGameMode.h"
#include "BeginAgainCharacter.h"

ABeginAgainGameMode::ABeginAgainGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ABeginAgainCharacter::StaticClass();	
}
