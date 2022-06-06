#include "TresAction_EnemyShipBase_ShadowSneakAttack.h"

UTresAction_EnemyShipBase_ShadowSneakAttack::UTresAction_EnemyShipBase_ShadowSneakAttack() {
    this->m_bSetAttackColImmediately = false;
    this->m_bSetBodyColImmediately = true;
    this->m_bRecoveryMast = true;
    this->m_AppearParticle = NULL;
    this->m_BaseYaw = 30.00f;
    this->m_RandamRange = 10.00f;
    this->m_Speed = 6000.00f;
    this->m_RunningTime = 2.00f;
    this->m_WaitAppearTime = 1.00f;
}

