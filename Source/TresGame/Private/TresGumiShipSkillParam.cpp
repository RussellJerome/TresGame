#include "TresGumiShipSkillParam.h"

FTresGumiShipSkillParam::FTresGumiShipSkillParam() {
    this->m_fAttackPoint = 0.00f;
    this->m_eElementType = ETresGumiShipAttackElementType::AET_NONE;
    this->m_eSubElementType = ETresGumiShipAttackSubElemntType::ASET_NONE;
    this->m_eBadStateType = ETresGumiShipBadStateType::BS_NONE;
    this->m_fTimeOfBadStateEffective = 0.00f;
    this->m_fPercentOfBadState = 0.00f;
    this->m_eReactionType = ETresGumiShipReactionType::RT_NONE;
    this->m_pHitEffect = NULL;
}

