#include "TresGimmickRA_SignBoardBase.h"
#include "TresReactorComponent.h"

void ATresGimmickRA_SignBoardBase::OnChangeBattleMode(bool bIsBattleMode) {
}

ATresGimmickRA_SignBoardBase::ATresGimmickRA_SignBoardBase() {
    this->MyReactor = CreateDefaultSubobject<UTresReactorComponent>(TEXT("TresReactor0"));
}

