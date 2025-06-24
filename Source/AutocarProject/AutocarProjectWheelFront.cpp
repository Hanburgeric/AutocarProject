// Copyright Epic Games, Inc. All Rights Reserved.

#include "AutocarProjectWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UAutocarProjectWheelFront::UAutocarProjectWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}