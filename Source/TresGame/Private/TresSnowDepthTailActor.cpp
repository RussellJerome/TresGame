#include "TresSnowDepthTailActor.h"
#include "Particles/ParticleSystemComponent.h"

ATresSnowDepthTailActor::ATresSnowDepthTailActor() {
    this->ParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
}

