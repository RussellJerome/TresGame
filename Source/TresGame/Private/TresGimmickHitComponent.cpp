#include "TresGimmickHitComponent.h"

class AActor;

void UTresGimmickHitComponent::OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}


void UTresGimmickHitComponent::BP_SetEnableHit(bool Enable) {
}

void UTresGimmickHitComponent::BP_ApplyHit(AActor* DamageCauser) {
}

UTresGimmickHitComponent::UTresGimmickHitComponent() {
    this->m_bUseHit = true;
    this->m_bEnableHitInterval = true;
    this->m_HitInterval = 0.10f;
    this->m_ApplyHitChrUniqueIDs.AddDefaulted(2);
}

