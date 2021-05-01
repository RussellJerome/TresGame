// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mercuna_StructsAndEnums.generated.h"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

UENUM(BlueprintType)
enum EMercunaPathEvent
{
	EMercunaPathEvent_Ready = 0 UMETA(DisplayName = "Ready"),
	EMercunaPathEvent_Updated = 1 UMETA(DisplayName = "Updated"),
	EMercunaPathEvent_Invalid = 2 UMETA(DisplayName = "Invalid"),
	EMercunaPathEvent_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EMercunaMoveResult
{
	EMercunaMoveResult_Success = 0 UMETA(DisplayName = "Success"),
	EMercunaMoveResult_Failed = 1 UMETA(DisplayName = "Failed"),
	EMercunaMoveResult_Cancelled = 2 UMETA(DisplayName = "Cancelled"),
	EMercunaMoveResult_Blocked = 3 UMETA(DisplayName = "Blocked"),
	EMercunaMoveResult_Invalid = 4 UMETA(DisplayName = "Invalid"),
	EMercunaMoveResult_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EMerOctreeDebugDrawMode
{
	EMerOctreeDebugDrawMode_DISABLED = 0 UMETA(DisplayName = "Disabled"),
	EMerOctreeDebugDrawMode_UNNAVIGABLE = 1 UMETA(DisplayName = "Unnavigable"),
	EMerOctreeDebugDrawMode_NAVIGABLE = 2 UMETA(DisplayName = "Navigable"),
	EMerOctreeDebugDrawMode_BOTH = 3 UMETA(DisplayName = "Both"),
	EMerOctreeDebugDrawMode_REGION = 4 UMETA(DisplayName = "Region"),
	EMerOctreeDebugDrawMode_REACHABLE = 5 UMETA(DisplayName = "Reachable"),
	EMerOctreeDebugDrawMode_PATHFIND = 6 UMETA(DisplayName = "Path Find"),
	EMerOctreeDebugDrawMode_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EMercunaPointDistribution
{
	EMercunaPointDistribution_Uniform = 0 UMETA(DisplayName = "Uniform"),
	EMercunaPointDistribution_Random = 1 UMETA(DisplayName = "Random"),
	EMercunaPointDistribution_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EMercunaMoveGoal
{
	EMercunaMoveGoal_Actor = 0 UMETA(DisplayName = "Actor"),
	EMercunaMoveGoal_Vector = 1 UMETA(DisplayName = "Vector"),
	EMercunaMoveGoal_None = 2 UMETA(DisplayName = "None"),
	EMercunaMoveGoal_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EMerObstacleType
{
	EMerObstacleType_AUTO = 0 UMETA(DisplayName = "Auto"),
	EMerObstacleType_SPHERE = 1 UMETA(DisplayName = "Sphere"),
	EMerObstacleType_MAX = 2 UMETA(Hidden)
};

USTRUCT(BlueprintType)
struct FMercunaNavigationConfiguration
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FMercunaNavigationConfiguration")
	float MaxPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FMercunaNavigationConfiguration")
	float MaxRoll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FMercunaNavigationConfiguration")
	bool MoveOnlyInLookDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FMercunaNavigationConfiguration")
	bool StopAtDestination;
};

USTRUCT(BlueprintType)
struct FMercunaMoveRequest
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FMercunaMoveRequest")
	class AActor* GoalActor;
};