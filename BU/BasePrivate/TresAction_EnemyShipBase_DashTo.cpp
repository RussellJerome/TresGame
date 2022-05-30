#include "TresAction_EnemyShipBase_DashTo.h"

UTresAction_EnemyShipBase_DashTo::UTresAction_EnemyShipBase_DashTo() {
    this->m_ForwardOffset = 5000.00f;
    this->m_GoalDistanceToTarget = 10000.00f;
    this->m_HomingYawRate = 6.00f;
    this->m_DashSpeed = 5000.00f;
    this->m_AccelTime = 1.50f;
    this->m_DeceleTime = 1.00f;
    this->m_FinishSpeed = 1000.00f;
    this->m_GoalRotationOffsetFront = 90.00f;
    this->m_GoalRotationOffset = 90.00f;
    this->m_DeclBrakeOnTurn = -1000.00f;
    this->m_MinSpeedOnTurn = 2000.00f;
    this->m_ActionCanelTime = 20.00f;
    this->m_InertiaPower = 1.00f;
    this->m_CancelTime = 1.00f;
    this->m_RotationYawAccel = 20.00f;
    this->m_TurnRotEndSpeed = 5.00f;
    this->m_TurnRotStartBrakeAngle = 40.00f;
    this->m_TurnRotAccelOnBrake = 10.00f;
    this->m_MaxRollAngle = 12.00f;
    this->m_RollDeclAngle = 4.00f;
    this->m_MaxTurningTime = 6.00f;
    this->m_SplashParticleAssetRight = NULL;
    this->m_SplashParticleAssetLeft = NULL;
    this->m_SplashParticleSocket = TEXT("center");
    this->m_SplashSpawnTime = 1.00f;
    this->m_SplashSpawnMinAngle = 30.00f;
    this->m_SplashParticleComp = NULL;
}

