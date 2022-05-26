#include "TresAttack3_e_bx903_Spin.h"

UTresAttack3_e_bx903_Spin::UTresAttack3_e_bx903_Spin() {
    this->m_ExplosionProjectile = NULL;
    this->m_DrillInitialSpeed = 2000.00f;
    this->m_DrillUpSpeed = 500.00f;
    this->m_DrillUpHoldTime = 3.00f;
    this->m_DrillUpHomingInitXYSpeed = 500.00f;
    this->m_DrillUpHomingAddXYSpeed = 500.00f;
    this->m_DrillUpHomingEndDist = 100.00f;
    this->m_HomingSpeed = 3000.00f;
    this->m_EndTimeMin = 3.00f;
    this->m_EndTimeMax = 5.00f;
    this->m_ReturnZSpeed = 500.00f;
    this->m_SpinAroundRadius = 3000.00f;
    this->m_SpinAroundSpeed = 120.00f;
    this->m_SpinRushNum = 5;
    this->m_SpinAddRushSpeed = 200.00f;
    this->m_SpinEndRadius = 100.00f;
    this->m_DrillEndHeight = 50.00f;
    this->m_DrillRiseEndHeight = 1500.00f;
    this->m_EnableTarget = true;
    this->m_IdleTime = 0.50f;
    this->m_IdleHigh = 800.00f;
    this->m_IdleStartTime = 0.00f;
    this->m_TargetOffestHigh = 50.00f;
    this->m_MoveHighMax = 50.00f;
}

