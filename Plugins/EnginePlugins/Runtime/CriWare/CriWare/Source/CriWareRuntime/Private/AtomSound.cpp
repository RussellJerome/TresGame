#include "AtomSound.h"
#include "AtomComponent.h"

AAtomSound::AAtomSound() {
    this->AtomComponent = CreateDefaultSubobject<UAtomComponent>(TEXT("AtomComponent0"));
}

