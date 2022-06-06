#include "TresNpcAttackDefinitionBase.h"

UTresNpcAttackDefinitionBase::UTresNpcAttackDefinitionBase() {
    this->m_bFlyingMode = false;
    this->m_bSwimAttack = false;
    this->m_bEnablePitchTurnSwim = false;
    this->m_bOnShotAbilityUsed = false;
    this->m_bStartVelocityClear = true;
    this->m_bEnableStartYawMax = false;
    this->m_StartYawMax = 135.00f;
    this->m_bWeaponVisible = true;
    this->m_bUsedTractionLimitAngle = false;
    this->m_TractionLimitAngleJump = 45.00f;
    this->m_bTractionPitch = false;
    this->m_TractionPitchUp = 45.00f;
    this->m_bTractionDecel = false;
    this->m_TractionDecelMoveSpeed = 500.00f;
    this->m_TractionMinMoveSpeed = 0.00f;
}

