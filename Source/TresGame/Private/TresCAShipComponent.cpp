#include "TresCAShipComponent.h"

class USkeletalMeshComponent;

void UTresCAShipComponent::BP_ResetAllDamageSmoke() {
}

void UTresCAShipComponent::BP_CreateDamageSmoke(USkeletalMeshComponent* inMesh, float lifePer) {
}

UTresCAShipComponent::UTresCAShipComponent() {
    this->m_bOscEnable = true;
    this->m_PitchPowFactor = 0.10f;
    this->m_RollPowFactor = 0.25f;
    this->m_DamageSmokeParticle = NULL;
}

