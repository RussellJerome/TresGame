#include "TresAction_EnemyShipBase_DarkBlastWithRush.h"

UTresAction_EnemyShipBase_DarkBlastWithRush::UTresAction_EnemyShipBase_DarkBlastWithRush() {
    this->m_HomingYawRate = 3.00f;
    this->m_HomingEndDist = 1000.00f;
    this->m_bUseCameraDirectionForHoming = false;
    this->m_DashSpeed = 500.00f;
    this->m_AccelTime = 1.00f;
    this->m_MaxSpeedTime = 1.35f;
    this->m_DeceleTime = 0.65f;
    this->m_bEnableFinishOnReachNear = true;
    this->m_bStartWithTurn = false;
    this->m_RotationYawAccel = 20.00f;
    this->m_TurnRotEndSpeed = 5.00f;
    this->m_TurnRotStartBrakeAngle = 40.00f;
    this->m_TurnRotAccelOnBrake = 10.00f;
    this->m_MaxRollAngle = 10.00f;
    this->m_RollDeclAngle = 3.00f;
    this->m_DarkBlastEffCharge = NULL;
    this->m_DarkBlastBeginTime = 1.00f;
    this->m_DarkBlastChargeTime = 5.00f;
    this->m_DarkBlastEffect = NULL;
}

