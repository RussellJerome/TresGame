// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGame.h"
#include "TresAIUtil.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAIUtil : public UObject
{
	GENERATED_BODY()
public:
	//UFUNCTION(BlueprintCallable, Category = "TresAIEventBattlePoint")
	//static void WaitForRunningBehaviorTree(class UObject* WorldContext, const FLatentActionInfo& LatentInfo, class ATresAIPawnBase* AIPawn) {};

	UFUNCTION(BlueprintPure, Category = "TresAIEventBattlePoint")
	static bool IsTurnSafe(const FVector& BaseLocation, const FVector& CurrentVector, const FVector& DesiredVector, float MoveSpeed, float RotationYawSpeed, class AController* Querier, float DivAngle) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresAIEventBattlePoint")
	static bool IsDirectPath(const FVector& Start, const FVector& End, class UObject* WorldContext, class AActor* PathfindingContext, bool bFailedRaycast) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresAIEventBattlePoint")
	static void GetRailSlideLocations(class ATresCharPawnBase* Pawn, TArray<FVector>& Result) {};

	UFUNCTION(BlueprintPure, Category = "TresAIEventBattlePoint")
	static bool GetFloorLocation(class UObject* WorldContext, const FVector& Location, class AActor* LocationContext, float ProjectionDistance, float AddedRadius, TEnumAsByte<ETresFloorTestMode> TestMode, FVector& Result) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresAIEventBattlePoint")
	static float GetActorNavigationRadius(class AActor* Actor) { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAIEventBattlePoint")
	static float GetActorCollisionRadius(class AActor* Actor) { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAIEventBattlePoint")
	static float GetActorAIRadius(class AActor* Actor) { return 0.0f; };

	UFUNCTION(BlueprintCallable, Category = "TresAIEventBattlePoint")
	static FVector BP_DirectionAtClosestPointOnPath(class UNavigationPath* Path, const FVector& Location) { return FVector::FVector(); };

	UFUNCTION(BlueprintCallable, Category = "TresAIEventBattlePoint")
	static FVector BP_ClosestPointOnPath(class UNavigationPath* Path, const FVector& Location) { return FVector::FVector(); };

	//UFUNCTION(BlueprintCallable, Category = "TresAIEventBattlePoint")
	//static void AITurnTo(class UObject* WorldContext, const FLatentActionInfo& LatentInfo, class ATresAIPawnBase* AIPawn, const FVector& TargetLocation, class AActor* TargetActor) {};
};
