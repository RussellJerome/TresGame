#include "TresFieldProjectile_e_ex357.h"
#include "TresBodyCollComponent.h"

ATresFieldProjectile_e_ex357::ATresFieldProjectile_e_ex357() {
    this->MyBodyColl = CreateDefaultSubobject<UTresBodyCollComponent>(TEXT("MyBodyColl"));
    this->m_Radius = 0.00f;
    this->m_EnableSpawnProjectileTurnTarget = true;
    this->m_AddProjectileClass = NULL;
    this->m_AttributeHitEndType = ETresAttributeHitEnd_e_ex357::AllLoopEnd;
    this->m_HitAttributeList.AddDefaulted(1);
}

