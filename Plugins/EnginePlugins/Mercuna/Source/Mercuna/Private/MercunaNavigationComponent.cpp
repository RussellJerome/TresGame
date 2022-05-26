#include "MercunaNavigationComponent.h"

class AActor;
class UObject;

void UMercunaNavigationComponent::TrackActor(AActor* Actor, float Distance, float Speed) {
}

void UMercunaNavigationComponent::Stop() {
}

void UMercunaNavigationComponent::SetAvoidanceAgainst(AActor* Actor, bool Enable) {
}

void UMercunaNavigationComponent::MoveToLocation(const FVector& Destination, float EndDistance, float Speed, bool UsePartialPath) {
}

void UMercunaNavigationComponent::MoveToActor(AActor* Actor, float EndDistance, float Speed, bool UsePartialPath) {
}

void UMercunaNavigationComponent::LookAt(AActor* Actor, float MaxPitch) {
}

void UMercunaNavigationComponent::GetPathInfo(bool& Valid, float& DistanceToEnd, FVector& NextPathPoint, bool& bIsFinalPoint) {
}

void UMercunaNavigationComponent::ConfigureMovement(bool bUsePathfinding, bool bUseDynamicAvoidance) {
}

void UMercunaNavigationComponent::Configure(const FMercunaNavigationConfiguration& NewConfiguration) {
}

void UMercunaNavigationComponent::ClearAvoidanceExclusions() {
}

void UMercunaNavigationComponent::CheckReachable(FVector Point, bool& Success, UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UMercunaNavigationComponent::CancelMovement() {
}

void UMercunaNavigationComponent::CancelLookAt() {
}

UMercunaNavigationComponent::UMercunaNavigationComponent() {
    this->Pathfinding = true;
    this->DynamicAvoidance = true;
}

