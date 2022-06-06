#include "TresGumiShipActorBase.h"
#include "TresGumiShipSoundSetComponent.h"
#include "TresRootComponent.h"

ATresGumiShipActorBase::ATresGumiShipActorBase() {
    this->m_pRootComponent = CreateDefaultSubobject<UTresRootComponent>(TEXT("TresRoot"));
    this->m_pSoundSet = CreateDefaultSubobject<UTresGumiShipSoundSetComponent>(TEXT("SoundSet"));
}

