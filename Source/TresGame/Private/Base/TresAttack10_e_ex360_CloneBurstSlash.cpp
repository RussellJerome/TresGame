#include "TresAttack10_e_ex360_CloneBurstSlash.h"

UTresAttack10_e_ex360_CloneBurstSlash::UTresAttack10_e_ex360_CloneBurstSlash() {
    this->m_SlashType = TRES_ENEMY_EX360_CLONEBURSTSLASH_MOVE_CUTDOWN;
    this->m_MoveStartMotPlayRate = 0.50f;
    this->m_AttackMotPlayRate = 0.50f;
    this->m_MoveHight = 400.00f;
    this->m_MoveWide = 400.00f;
    this->m_MoveToTargetAddWide = 20.00f;
    this->m_Move2TimeMin = 0.00f;
    this->m_Move2Speed = 4000.00f;
    this->m_OffsetZ = 0.00f;
    this->m_OffsetDist = 0.00f;
    this->m_MoveScaleCurve = NULL;
    this->m_AttackMotDefaultSpeed = 2.50f;
    this->m_AttackMotSpeedMin = 0.70f;
    this->m_AttackMotChectDist = 1500.00f;
    this->m_AttackStartTime = 0.00f;
    this->m_AttackMotScaleRate = 1.00f;
    this->m_RidedKeyBlades = NULL;
}

