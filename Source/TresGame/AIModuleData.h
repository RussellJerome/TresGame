// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIModuleData.generated.h"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------
UENUM(BlueprintType)
enum EInterruptAbortBehavior
{
	AlwaysAllow                    = 0,
	DenyOnNormalExecution          = 1,
	DenyOnInterrupt                = 2,
	EInterruptAbortBehavior_MAX    = 3
};