#include "TresSplineParticleActor.h"
#include "Components/SplineComponent.h"

ATresSplineParticleActor::ATresSplineParticleActor() {
    this->m_ParticleSystem = NULL;
    this->m_SpawnDistance = 0.00f;
    this->m_bEnableSplineRotation = false;
    this->m_SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent0"));
}

