// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mercuna3DMovement_StructsAndEnums.generated.h"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

USTRUCT(BlueprintType)
struct FMercuna3DMovementProperties
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FMercuna3DMovementProperties")
	float MaxSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FMercuna3DMovementProperties")
	FVector MaxAccel;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FMercuna3DMovementProperties")
	float MaxAngSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FMercuna3DMovementProperties")
	float MaxAngAccel;
};