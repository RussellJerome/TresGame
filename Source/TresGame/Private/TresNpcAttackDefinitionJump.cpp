#include "TresNpcAttackDefinitionJump.h"

UTresNpcAttackDefinitionJump::UTresNpcAttackDefinitionJump() {
    this->m_bTargetDownCheck = false;
    this->m_bUsedMaxDistance = false;
    this->m_bUsedMinDistance = false;
    this->m_bUsedMinHeight = false;
    this->m_bUsedUnderMaxJumpHeight = true;
    this->m_bUsedOnMinJumpHeight = false;
    this->m_bWeaponVisible = false;
    this->m_bStartVelocityClear = true;
    this->m_bUsedLimitAngle = false;
    this->m_bPitch = false;
    this->m_PitchUp = 45.00f;
    this->m_AttackAnimDataForJump = NULL;
}

