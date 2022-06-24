#pragma once
#include "CoreMinimal.h"
#include "ETresFloorTestMode.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "UObject/NoExportTypes.h"
#include "TresAIUtil.generated.h"

class ATresCharPawnBase;
class ATresAIPawnBase;
class AController;
class AActor;
class UNavigationPath;

UCLASS(BlueprintType)
class UTresAIUtil : public UObject {
    GENERATED_BODY()
public:
    UTresAIUtil();
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
    static void WaitForRunningBehaviorTree(UObject* WorldContext, FLatentActionInfo LatentInfo, ATresAIPawnBase* AIPawn);
    
    UFUNCTION(BlueprintPure)
    static bool IsTurnSafe(const FVector& BaseLocation, const FVector& CurrentVector, const FVector& DesiredVector, float MoveSpeed, float RotationYawSpeed, AController* Querier, float DivAngle);
    
    UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
    static bool IsDirectPath(const FVector& Start, const FVector& End, UObject* WorldContext, AActor* PathfindingContext, bool bFailedRaycast);
    
    UFUNCTION(BlueprintPure)
    static void GetRailSlideLocations(TArray<FVector>& Result, ATresCharPawnBase* Pawn);
    
    UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
    static bool GetFloorLocation(FVector& Result, const UObject* WorldContext, FVector Location, const AActor* LocationContext, float ProjectionDistance, float AddedRadius, TEnumAsByte<ETresFloorTestMode::Type> TestMode);
    
    UFUNCTION(BlueprintPure)
    static float GetActorNavigationRadius(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static float GetActorCollisionRadius(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static float GetActorAIRadius(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static FVector BP_DirectionAtClosestPointOnPath(UNavigationPath* Path, FVector Location);
    
    UFUNCTION(BlueprintPure)
    static FVector BP_ClosestPointOnPath(UNavigationPath* Path, FVector Location);
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
    static void AITurnTo(UObject* WorldContext, FLatentActionInfo LatentInfo, ATresAIPawnBase* AIPawn, FVector TargetLocation, AActor* TargetActor);
    
};

