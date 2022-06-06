#include "TresGimmick_BT_PrizeGimmickSkeletalBase.h"
#include "TresStaticMeshComponent.h"

ATresGimmick_BT_PrizeGimmickSkeletalBase::ATresGimmick_BT_PrizeGimmickSkeletalBase() {
    this->MyStaticMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("MyStaticMesh"));
    this->ShadowMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("ShadowMesh"));
    this->m_DitherFadeStartTime = 1.50f;
    this->m_ReplicaHitCountProfile = ETresGimmickHitCountComponentDamageProfile::PrizeBT;
    this->m_NormalHitCountNoDamage = false;
}

