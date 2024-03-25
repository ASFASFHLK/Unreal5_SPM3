// Copyright Epic Games, Inc. All Rights Reserved.

#include "Unreal5_SPM3GameMode.h"
#include "Unreal5_SPM3Character.h"
#include "UObject/ConstructorHelpers.h"

AUnreal5_SPM3GameMode::AUnreal5_SPM3GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
