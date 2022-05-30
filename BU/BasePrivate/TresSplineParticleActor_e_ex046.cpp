#include "TresSplineParticleActor_e_ex046.h"
#include "Components/SplineComponent.h"

ATresSplineParticleActor_e_ex046::ATresSplineParticleActor_e_ex046() {
    this->m_ParticleSystem = NULL;
    this->m_SpawnDistance = 0.00f;
    this->m_bEnableSplineRotation = false;
    this->m_SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent0"));
}

