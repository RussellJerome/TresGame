#include "TresAction_EnemyLargeShipBase_DarkBomb.h"

UTresAction_EnemyLargeShipBase_DarkBomb::UTresAction_EnemyLargeShipBase_DarkBomb() {
    this->m_EffCharge = NULL;
    this->m_SubEffCharge = NULL;
    this->m_EffMuzzle = NULL;
    this->m_DarkBombChargeTime = 6.00f;
    this->m_DarkBombShotWaitTime = 2.00f;
    this->m_DarkBombProjAngle = 15.00f;
    this->m_DarkBombProjCantFireAngle = 30.00f;
    this->m_DarkBombLowSpeedRate = 0.50f;
    this->m_DarkBombLowSpeedTime = 1.50f;
    this->m_DarkBombTargetLength = 2000.00f;
    this->m_ChargeEffect = NULL;
    this->m_SubChargeEffectLeft = NULL;
    this->m_SubChargeEffectRight = NULL;
}

