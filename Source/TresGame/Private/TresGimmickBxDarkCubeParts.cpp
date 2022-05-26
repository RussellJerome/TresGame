#include "TresGimmickBxDarkCubeParts.h"
#include "TresRootComponent.h"

ATresGimmickBxDarkCubeParts::ATresGimmickBxDarkCubeParts() {
    this->MyRoot = CreateDefaultSubobject<UTresRootComponent>(TEXT("TresRoot"));
}

