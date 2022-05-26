#include "TresProjectile_e_ex047_Afterimage.h"
#include "TresLockonTargetComponent.h"

ATresProjectile_e_ex047_Afterimage::ATresProjectile_e_ex047_Afterimage() {
    this->m_MyLockonComponent = CreateDefaultSubobject<UTresLockonTargetComponent>(TEXT("e_ex047_LockonComponent"));
    this->m_DestroyLookOn = true;
    this->m_AuraStartValue = 0.00f;
    this->m_AuraEndValue = 0.50f;
}

