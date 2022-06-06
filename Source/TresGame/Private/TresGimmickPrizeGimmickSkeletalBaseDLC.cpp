#include "TresGimmickPrizeGimmickSkeletalBaseDLC.h"
#include "TresGimmickHitCountComponent.h"
#include "TresPrizeGenComponent.h"
#include "TresLockonTargetComponent.h"
#include "TresBodyCollPrimitive.h"
#include "TresNavModifierComponent.h"

void ATresGimmickPrizeGimmickSkeletalBaseDLC::ReceiveAnimation_Implementation() {
}

ATresGimmickPrizeGimmickSkeletalBaseDLC::ATresGimmickPrizeGimmickSkeletalBaseDLC() {
    this->TresLockonTarget = CreateDefaultSubobject<UTresLockonTargetComponent>(TEXT("TresLockonTarget"));
    this->TresBodyCollPrimitive = CreateDefaultSubobject<UTresBodyCollPrimitive>(TEXT("TresBodyCollPrimitive"));
    this->TresPrizeGen = CreateDefaultSubobject<UTresPrizeGenComponent>(TEXT("TresPrizeGen"));
    this->TresGimmickHitCount = CreateDefaultSubobject<UTresGimmickHitCountComponent>(TEXT("TresGimmickHitCount"));
    this->TresNavModifier = CreateDefaultSubobject<UTresNavModifierComponent>(TEXT("TresNavModifier"));
    this->m_DropPrize = true;
    this->m_PrizeIndex = -1;
    this->m_bDestroyDisableBodyCollition = true;
}

