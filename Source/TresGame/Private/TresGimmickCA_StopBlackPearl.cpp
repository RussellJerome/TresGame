#include "TresGimmickCA_StopBlackPearl.h"
#include "TresCAShipComponent.h"

ATresGimmickCA_StopBlackPearl::ATresGimmickCA_StopBlackPearl() {
    this->TresCAShipComponent = CreateDefaultSubobject<UTresCAShipComponent>(TEXT("TresCAShipComponent"));
}

