#include "TresGimmickAcceleration.h"
#include "Particles/ParticleSystemComponent.h"

ATresGimmickAcceleration::ATresGimmickAcceleration() {
    this->m_pEnableEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("EnableEffect"));
    this->m_pEffectCurve = NULL;
}

