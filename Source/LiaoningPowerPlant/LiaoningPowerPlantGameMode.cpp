// Copyright Epic Games, Inc. All Rights Reserved.

#include "LiaoningPowerPlantGameMode.h"
#include "LiaoningPowerPlantCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALiaoningPowerPlantGameMode::ALiaoningPowerPlantGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("Blueprint'/Game/ThirdPakage/ThirdPersonCPP/Blueprints/ThirdPersonCharacter.ThirdPersonCharacter_C'"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
