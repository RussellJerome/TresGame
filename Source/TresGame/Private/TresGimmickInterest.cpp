#include "TresGimmickInterest.h"
#include "TresRootComponent.h"

ATresGimmickInterest::ATresGimmickInterest() {
    this->MyRoot = CreateDefaultSubobject<UTresRootComponent>(TEXT("TresRoot"));
}

