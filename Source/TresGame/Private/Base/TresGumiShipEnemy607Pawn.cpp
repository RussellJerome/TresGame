#include "TresGumiShipEnemy607Pawn.h"
#include "Particles/ParticleSystemComponent.h"

int32 ATresGumiShipEnemy607Pawn::_GetParticleCount() {
    return 0;
}

ATresGumiShipEnemy607Pawn::ATresGumiShipEnemy607Pawn() {
    this->m_pDeadVFX = NULL;
    this->m_pWaveVFX = NULL;
    this->m_pApperVFX = NULL;
    this->m_fAdvanceDistance = 3000.00f;
    this->m_WeponTimer = 3.00f;
    this->m_HPParticle = false;
    this->m_NoiseTimer = 5.00f;
    this->m_NoiseTime = 10.00f;
    this->m_NoiseScale = 25.00f;
    this->m_NoiseTimeScale = 250.00f;
    this->m_pParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("e_gm607"));
}

