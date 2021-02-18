// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ProjetCollectableGameMode.h"
#include "ProjetCollectableCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjetCollectableGameMode::AProjetCollectableGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
