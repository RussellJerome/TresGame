#include "TresOxygenPoolActor.h"
#include "TresOxygenPoolComponent.h"
#include "Particles/ParticleSystemComponent.h"

ATresOxygenPoolActor::ATresOxygenPoolActor() {
    this->MyRoot = CreateDefaultSubobject<UTresOxygenPoolComponent>(TEXT("TresOxygenPool"));
    this->MyParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleComp"));
}

