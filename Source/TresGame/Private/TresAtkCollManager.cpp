#include "TresAtkCollManager.h"

ATresAtkCollManager::ATresAtkCollManager() {
    this->m_CmnGuardReflectEffect = NULL;
    this->m_CmnStaggerReflectEffect = NULL;
    this->m_CmnInvincibleHitEffect = NULL;
    this->m_CmnCriticalHitEffect = NULL;
    this->m_CmnArmorHitEffect = NULL;
    this->m_CmnIgnoreGuardHitEffect = NULL;
    this->m_PhysDamageTypeClass[0] = NULL;
    this->m_PhysDamageTypeClass[1] = NULL;
    this->m_PhysDamageTypeClass[2] = NULL;
    this->m_PhysDamageTypeClass[3] = NULL;
}

