// Copyright Epic Games, Inc. All Rights Reserved.

#include "AutocarProjectGameMode.h"
#include "AutocarProjectPlayerController.h"

AAutocarProjectGameMode::AAutocarProjectGameMode()
{
	PlayerControllerClass = AAutocarProjectPlayerController::StaticClass();
}
