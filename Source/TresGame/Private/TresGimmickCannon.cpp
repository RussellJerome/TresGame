#include "TresGimmickCannon.h"
#include "TresBodyCollPrimitive.h"
#include "Components/ArrowComponent.h"
#include "TresLockonTargetComponent.h"

ATresGimmickCannon::ATresGimmickCannon() {
    this->m_pBodyCollPrimitive = CreateDefaultSubobject<UTresBodyCollPrimitive>(TEXT("BodyCollision"));
    this->m_pArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
    this->m_pLockonTargetComponent = CreateDefaultSubobject<UTresLockonTargetComponent>(TEXT("LockonTarget"));
    this->m_ProjectileClass = NULL;
    this->m_bBellShot = false;
}

