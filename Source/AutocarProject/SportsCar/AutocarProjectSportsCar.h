// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AutocarProjectPawn.h"
#include "AutocarProjectSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class AAutocarProjectSportsCar : public AAutocarProjectPawn
{
	GENERATED_BODY()
	
public:

	AAutocarProjectSportsCar();
};
