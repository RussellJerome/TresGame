#include "TresSignProjectile_e_ex357_Base.h"
#include "Particles/ParticleSystemComponent.h"

ATresSignProjectile_e_ex357_Base::ATresSignProjectile_e_ex357_Base() {
    this->MyParticle2 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MyParticle2"));
    this->m_SignParticleSystem = NULL;
    this->m_DoFireDelayTime = 1.00f;
}

