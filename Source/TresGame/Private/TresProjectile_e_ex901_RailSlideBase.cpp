#include "TresProjectile_e_ex901_RailSlideBase.h"
#include "TresCharMovementComponent.h"
#include "TresBodyCollComponent.h"

void ATresProjectile_e_ex901_RailSlideBase::RefreshAtkColl() {
}

ATresProjectile_e_ex901_RailSlideBase::ATresProjectile_e_ex901_RailSlideBase() {
    this->m_HitPoint = 1;
    this->m_FireParticle = NULL;
    this->m_FireParticleComp = NULL;
    this->m_ExplodeParticle = NULL;
    this->m_ExplodeParticleComp = NULL;
    this->MyCharMovement = CreateDefaultSubobject<UTresCharMovementComponent>(TEXT("TresCharMovement0"));
    this->MyBodyColl = CreateDefaultSubobject<UTresBodyCollComponent>(TEXT("TresBodyColl0"));
    this->m_HomingTargetActor = NULL;
    this->m_fRelativeVelocity = 0.00f;
    this->m_bEndHoming = false;
}

