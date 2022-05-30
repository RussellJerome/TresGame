#include "TresProjectile_e_bx901_Drill.h"
#include "TresBodyCollComponent.h"

class UTresStaticMeshComponent;


UTresStaticMeshComponent* ATresProjectile_e_bx901_Drill::BP_GetMyMesh() {
    return NULL;
}

ATresProjectile_e_bx901_Drill::ATresProjectile_e_bx901_Drill() {
    this->m_iDrillNum = 0;
    this->m_fDrillMargin = 0.00f;
    this->m_bSpawnSelf = false;
    this->m_fMeshHideTimeAfterHit = 0.00f;
    this->m_HitEffect = NULL;
    this->m_LightEffect = NULL;
    this->m_LightEffectComp = NULL;
    this->m_BrokenEffect = NULL;
    this->m_BrokenEffectComp = NULL;
    this->m_OriginalDrillComp = NULL;
    this->MyBodyColl = CreateDefaultSubobject<UTresBodyCollComponent>(TEXT("TresBodyColl0"));
}

