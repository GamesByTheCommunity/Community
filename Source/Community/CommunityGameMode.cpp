// Copyright Epic Games, Inc. All Rights Reserved.

#include "CommunityGameMode.h"
#include "CommunityCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACommunityGameMode::ACommunityGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
