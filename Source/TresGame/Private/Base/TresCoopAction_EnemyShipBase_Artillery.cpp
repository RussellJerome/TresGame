#include "TresCoopAction_EnemyShipBase_Artillery.h"

UTresCoopAction_EnemyShipBase_Artillery::UTresCoopAction_EnemyShipBase_Artillery() {
    this->m_bSetAttackColImmediately = false;
    this->m_bSetBodyColImmediately = true;
    this->m_AppearParticle = NULL;
    this->m_WaitAppearTime = 1.00f;
    this->m_RunningTime = 5.00f;
}

