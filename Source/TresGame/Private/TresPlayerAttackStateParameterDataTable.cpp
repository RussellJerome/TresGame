#include "TresPlayerAttackStateParameterDataTable.h"

FTresPlayerAttackStateParameterDataTable::FTresPlayerAttackStateParameterDataTable() {
    this->m_fAnimStartTime = 0.00f;
    this->m_bUseTractionMove = false;
    this->m_bUseRootMoveScale = false;
    this->m_bIsJumpAttack = false;
    this->m_bIsDownAttack = false;
    this->m_bNotFallingUntilStartAttack = false;
    this->m_bStabSuppression = false;
    this->m_fTractionSpeedXY = 0.00f;
    this->m_fTractionSpeedZ = 0.00f;
    this->m_fTractionRateZ = 0.00f;
    this->m_fRootMoveLength = 0.00f;
    this->m_fCloseRangeXY = 0.00f;
    this->m_bIsFinish = false;
    this->m_bIsAerial = false;
    this->m_bIsInvincible = false;
    this->m_bIsImmpbile = false;
    this->m_bIsFaceTrgUntil = false;
    this->m_bIgnoreCoolDown = false;
    this->m_fInvincibleTimer = 0.00f;
    this->m_bIsWarp = false;
    this->m_fWarpTimer = 0.00f;
    this->m_dWarpAuraEffectGroup = 0;
    this->m_dEffectGroup = 0;
    this->m_dVoiceGroup = 0;
}

