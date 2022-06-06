#include "TresGimmick_BT_PrizeGimmickStaticBase.h"
#include "TresStaticMeshComponent.h"

ATresGimmick_BT_PrizeGimmickStaticBase::ATresGimmick_BT_PrizeGimmickStaticBase() {
    this->ShadowMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("ShadowMesh"));
    this->m_DitherFadeStartTime = 1.50f;
    this->m_ReplicaHitCountProfile = ETresGimmickHitCountComponentDamageProfile::PrizeBT;
    this->m_NormalHitCountNoDamage = false;
}

