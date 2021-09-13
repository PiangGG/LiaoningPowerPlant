// Copyright Epic Games, Inc. All Rights Reserved.

#include "LiaoningPowerPlantGameMode.h"
#include "LiaoningPowerPlantCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALiaoningPowerPlantGameMode::ALiaoningPowerPlantGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
