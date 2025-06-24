// Copyright Epic Games, Inc. All Rights Reserved.

#include "AutocarProjectWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UAutocarProjectWheelRear::UAutocarProjectWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}