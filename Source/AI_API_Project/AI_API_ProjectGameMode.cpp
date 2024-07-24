// Copyright Epic Games, Inc. All Rights Reserved.

#include "AI_API_ProjectGameMode.h"
#include "AI_API_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAI_API_ProjectGameMode::AAI_API_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
