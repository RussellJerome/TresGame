#include "TresGimmickCannonBell.h"
#include "Particles/ParticleSystemComponent.h"
#include "TresBodyCollPrimitive.h"
#include "TresLockonTargetComponent.h"

ATresGimmickCannonBell::ATresGimmickCannonBell() {
    this->m_pBellEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BellEnableEffect"));
    this->m_pBodyCollPrimitive = CreateDefaultSubobject<UTresBodyCollPrimitive>(TEXT("BodyCollision"));
    this->m_pLockonTargetComponent = CreateDefaultSubobject<UTresLockonTargetComponent>(TEXT("LockonTarget"));
    this->m_ShotNumMax = 5;
    this->m_ShotIntervalMax = 5.00f;
    this->m_CooldownMax = 20.00f;
    this->m_ShotNum = 0;
    this->m_shotInterval = 0.00f;
    this->m_Cooldown = 0.00f;
    this->m_bShotRequest = false;
    this->m_bPreEnableBell = false;
}

