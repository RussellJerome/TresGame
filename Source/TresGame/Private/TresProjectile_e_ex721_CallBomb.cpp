#include "TresProjectile_e_ex721_CallBomb.h"

void ATresProjectile_e_ex721_CallBomb::OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}

ATresProjectile_e_ex721_CallBomb::ATresProjectile_e_ex721_CallBomb() {
    this->m_StartEmissionTime = 0.10f;
    this->m_StartTransitionTime = 0.40f;
}

