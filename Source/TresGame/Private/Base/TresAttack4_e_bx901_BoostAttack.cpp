#include "TresAttack4_e_bx901_BoostAttack.h"

UTresAttack4_e_bx901_BoostAttack::UTresAttack4_e_bx901_BoostAttack() {
    this->m_iMaxAttackCount = 2;
    this->m_bUseBBKey_MaxAttackCount = false;
    this->m_fBackAccel = 0.00f;
    this->m_fBackMaxVelocity = 0.00f;
    this->m_fBackBrake = 0.00f;
    this->m_fAttackInitVelocity = 0.00f;
    this->m_fAttackAccel = 0.00f;
    this->m_fAttackMaxVelocity = 0.00f;
    this->m_fEndHomingDistance = 0.00f;
    this->m_fAttackPastDistance = 0.00f;
    this->m_bUseBBKey_AttackPastDistance = false;
    this->m_fLastAttackPastDistance = 0.00f;
    this->m_bUseBBKey_LastAttackPastDistance = false;
    this->m_fTurnBrake = 0.00f;
    this->m_fTurnMinVelocity = 0.00f;
    this->m_bResetVelocityOnAttack = false;
    this->m_fCloseStackCheckDistance = 300.00f;
    this->m_fCloseStackCheckTime = 0.10f;
    this->m_DarkCubeMineSpawnFlag = 0;
}

