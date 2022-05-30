#include "TresAction_EnemyShipBase_Escape.h"

UTresAction_EnemyShipBase_Escape::UTresAction_EnemyShipBase_Escape() {
    this->m_bSetAttackColImmediately = true;
    this->m_bSetBodyColImmediately = false;
    this->m_IsLeaveBattle = false;
    this->m_bSetVelocity = false;
    this->m_bSetPushPowerMax = true;
    this->m_bSetWarpOutFlag = false;
    this->m_KeepSpeed = 2000.00f;
    this->m_EscapeTime = 1.00f;
    this->m_bCoopDespawn = false;
}

