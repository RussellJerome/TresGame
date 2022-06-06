#include "TresAction_EnemyShipBase_DashTurn.h"

UTresAction_EnemyShipBase_DashTurn::UTresAction_EnemyShipBase_DashTurn() {
    this->m_DashTime = 5.00f;
    this->m_DashSpeed = 8000.00f;
    this->m_DashRoll = 5.00f;
    this->m_AccelTimePer = 5;
    this->m_RotatePer = 7;
    this->m_MaxSpeedPer = 4;
    this->m_DecelePer = 2;
    this->m_InertiaPower = 1.00f;
    this->m_RotateAngle = 90.00f;
    this->m_RotateBrakeTime = 0.50f;
    this->m_RotateVectorValue = 0.50f;
    this->m_CancelTime = 1.00f;
    this->m_SplashParticleAssetRight = NULL;
    this->m_SplashParticleAssetLeft = NULL;
    this->m_SplashParticleComp = NULL;
}

