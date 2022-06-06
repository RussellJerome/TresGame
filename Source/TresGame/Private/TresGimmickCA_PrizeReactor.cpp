#include "TresGimmickCA_PrizeReactor.h"
#include "TresReactorComponent.h"

void ATresGimmickCA_PrizeReactor::GetPrizeItem(ETresDropItemID dropID) {
}

ATresGimmickCA_PrizeReactor::ATresGimmickCA_PrizeReactor() {
    this->m_ReactorComp = CreateDefaultSubobject<UTresReactorComponent>(TEXT("ATresGimmickCA_PrizeReactor_ReactorComp"));
}

