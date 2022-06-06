#include "TresNpcAttackDefinitionDash.h"

UTresNpcAttackDefinitionDash::UTresNpcAttackDefinitionDash() {
    this->m_LoopBranch = true;
    this->m_TargetRun = false;
    this->m_TargetOutRange = 0.00f;
    this->m_HitWallDeg = 0.00f;
    this->m_HeightLimit = 100.00f;
    this->m_FallHeight = 150.00f;
    this->m_bUsedTurnSpeed = false;
    this->m_TurnSpeed = 360.00f;
    this->m_bStartVelocityClear = true;
    this->m_bEnableStartYawMax = false;
    this->m_StartYawMax = 135.00f;
}

