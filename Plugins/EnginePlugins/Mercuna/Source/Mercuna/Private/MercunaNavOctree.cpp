#include "MercunaNavOctree.h"
#include "MerNavOctreeRenderingComponent.h"

class UMercunaPath;
class AActor;

void AMercunaNavOctree::Raycast(FVector Start, FVector End, float NavigationRadius, FVector& HitPosition, bool& RayHit) {
}

void AMercunaNavOctree::IsNavigableMulti(const TArray<FVector>& Positions, float NavigationRadius, TArray<bool>& Results) {
}

void AMercunaNavOctree::IsNavigable(FVector Position, float NavigationRadius, bool& Result) {
}

UMercunaPath* AMercunaNavOctree::FindPathToLocation(FVector Start, FVector End, float NavigationRadius, bool AllowPartial, float MaxPathLength) {
    return NULL;
}

UMercunaPath* AMercunaNavOctree::FindPathToActor(FVector Start, AActor* GoalActor, float NavigationRadius, bool AllowPartial, float MaxPathLength) {
    return NULL;
}

void AMercunaNavOctree::ClampToNavigable(FVector Position, float NavigationRadius, float SearchRadius, FVector& ClampedPosition, bool& Result) {
}

void AMercunaNavOctree::CheckReachable(FVector Start, FVector End, float NavigationRadius, float MaxPathLength, bool& Result) {
}

AMercunaNavOctree::AMercunaNavOctree() {
    this->CellSize = 50.00f;
    this->MinPawnRadius = 1;
    this->MaxPawnRadius = 8;
    this->DebugDrawMode = EMerOctreeDebugDrawMode::DISABLED;
    this->MerNavOctreeRenderingComponent = CreateDefaultSubobject<UMerNavOctreeRenderingComponent>(TEXT("MerNavOctreeRenderingComponent"));
    this->bBuildAsSublevel = false;
    this->bNeedsRebuild = false;
}

