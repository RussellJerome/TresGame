#include "TresAction_EnemyShipBase_Appear.h"

UTresAction_EnemyShipBase_Appear::UTresAction_EnemyShipBase_Appear() {
    this->m_bSetAttackColImmediately = false;
    this->m_bSetBodyColImmediately = true;
    this->m_bSetVelocity = false;
    this->m_bSetBodyPushPowerLow = true;
    this->m_bSetWarpOutFlag = false;
    this->m_bResetDamageCount = false;
    this->m_bEnableReverse = false;
    this->m_AppearParticle = NULL;
    this->m_WaitAppearTime = 1.00f;
    this->m_WaitAfterAppear = 0.50f;
}

