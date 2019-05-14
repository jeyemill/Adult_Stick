// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Adult_StickGameMode.h"
#include "Adult_StickCharacter.h"

AAdult_StickGameMode::AAdult_StickGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AAdult_StickCharacter::StaticClass();	
}
