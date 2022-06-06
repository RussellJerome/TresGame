#include "TresGumiShipEffectSetComponent.h"

class USceneComponent;
class UParticleSystemComponent;
class AActor;

UParticleSystemComponent* UTresGumiShipEffectSetComponent::SpawnEffectAttachedSetAbsolute(const int32 dParticleSystemIndex, USceneComponent* pAttachToComponent, bool bIsManagedTarget, int32 dGroupID, bool bAbsoluteLocation, bool bAbsoluteRotation, bool bAbsoluteScale, FName AttachPointName, FVector vLocation, FRotator Rotation, FVector vScale, TEnumAsByte<EAttachLocation::Type> eLocationType, float fWarmupTime) {
    return NULL;
}

UParticleSystemComponent* UTresGumiShipEffectSetComponent::SpawnEffectAttached(const int32 dParticleSystemIndex, USceneComponent* pAttachToComponent, bool bIsManagedTarget, int32 dGroupID, FName AttachPointName, FVector vLocation, FRotator Rotation, FVector vScale, TEnumAsByte<EAttachLocation::Type> eLocationType, float fWarmupTime) {
    return NULL;
}

UParticleSystemComponent* UTresGumiShipEffectSetComponent::SpawnEffectAtLocation(const int32 dParticleSystemIndex, AActor* pOuter, bool bIsManagedTarget, int32 dGroupID, FVector vLocation, FRotator Rotation, FVector vScale, float fWarmupTime) {
    return NULL;
}

void UTresGumiShipEffectSetComponent::RemoveInvalidComponentFromGroupID(int32 dGroupID) {
}

void UTresGumiShipEffectSetComponent::LoopEndEffectFromGroupID(int32 dGroupID, bool bImmediatelyRemove) {
}

void UTresGumiShipEffectSetComponent::LoopEndEffect(bool bImmediatelyRemove) {
}

bool UTresGumiShipEffectSetComponent::IsEndFromGroup(int32 dGroupID) const {
    return false;
}

UTresGumiShipEffectSetComponent::UTresGumiShipEffectSetComponent() {
}

