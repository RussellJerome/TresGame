#include "TresWallRunEffectActor.h"
#include "TresWallRunEffectComponent.h"

ATresWallRunEffectActor::ATresWallRunEffectActor() {
    this->m_Root = CreateDefaultSubobject<UTresWallRunEffectComponent>(TEXT("TresRoot0"));
}

