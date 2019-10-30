// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TestProjectGameMode.h"
#include "TestProjectBall.h"

ATestProjectGameMode::ATestProjectGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = ATestProjectBall::StaticClass();
}
