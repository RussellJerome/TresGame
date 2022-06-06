#include "TresAIUtil.h"

class ATresCharPawnBase;
class UObject;
class ATresAIPawnBase;
class AController;
class AActor;
class UNavigationPath;

void UTresAIUtil::WaitForRunningBehaviorTree(UObject* WorldContext, FLatentActionInfo LatentInfo, ATresAIPawnBase* AIPawn) {
}

bool UTresAIUtil::IsTurnSafe(const FVector& BaseLocation, const FVector& CurrentVector, const FVector& DesiredVector, float MoveSpeed, float RotationYawSpeed, AController* Querier, float DivAngle) {
    return false;
}

bool UTresAIUtil::IsDirectPath(const FVector& Start, const FVector& End, UObject* WorldContext, AActor* PathfindingContext, bool bFailedRaycast) {
    return false;
}

void UTresAIUtil::GetRailSlideLocations(TArray<FVector>& Result, ATresCharPawnBase* Pawn) {
}

bool UTresAIUtil::GetFloorLocation(FVector& Result, const UObject* WorldContext, FVector Location, const AActor* LocationContext, float ProjectionDistance, float AddedRadius, TEnumAsByte<ETresFloorTestMode::Type> TestMode) {
    return false;
}

float UTresAIUtil::GetActorNavigationRadius(const AActor* Actor) {
    return 0.0f;
}

float UTresAIUtil::GetActorCollisionRadius(const AActor* Actor) {
    return 0.0f;
}

float UTresAIUtil::GetActorAIRadius(const AActor* Actor) {
    return 0.0f;
}

FVector UTresAIUtil::BP_DirectionAtClosestPointOnPath(UNavigationPath* Path, FVector Location) {
    return FVector{};
}

FVector UTresAIUtil::BP_ClosestPointOnPath(UNavigationPath* Path, FVector Location) {
    return FVector{};
}

void UTresAIUtil::AITurnTo(UObject* WorldContext, FLatentActionInfo LatentInfo, ATresAIPawnBase* AIPawn, FVector TargetLocation, AActor* TargetActor) {
}

UTresAIUtil::UTresAIUtil() {
}

