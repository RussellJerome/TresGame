#include "TresProjectile_e_ex355_Claymore_Throw.h"
#include "TresLockonTargetComponent.h"

ATresProjectile_e_ex355_Claymore_Throw::ATresProjectile_e_ex355_Claymore_Throw() {
    this->m_LockonComp = CreateDefaultSubobject<UTresLockonTargetComponent>(TEXT("LockonComp"));
    this->m_TargetActor = NULL;
    this->m_bDebugDispRotateVelocity = false;
    this->m_fCurrentHomingRotateVelocity = 0.00f;
    this->m_EQS_ThrowSpawn = NULL;
}

