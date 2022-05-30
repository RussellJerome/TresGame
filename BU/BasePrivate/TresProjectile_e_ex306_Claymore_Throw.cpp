#include "TresProjectile_e_ex306_Claymore_Throw.h"
#include "TresLockonTargetComponent.h"

ATresProjectile_e_ex306_Claymore_Throw::ATresProjectile_e_ex306_Claymore_Throw() {
    this->m_fMinHomingDistance = 0.00f;
    this->m_fMaxHomingAngle = 0.00f;
    this->m_fMaxHomingRotateVelocity = 0.00f;
    this->m_LockonComp = CreateDefaultSubobject<UTresLockonTargetComponent>(TEXT("LockonComp"));
    this->m_TargetActor = NULL;
}

