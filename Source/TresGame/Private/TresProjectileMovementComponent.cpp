#include "TresProjectileMovementComponent.h"

UTresProjectileMovementComponent::UTresProjectileMovementComponent() {
    this->m_Accel = 0.00f;
    this->m_VelocityCurve = NULL;
    this->m_bVelocityCurveLoop = false;
    this->m_bDisableMovementProc = false;
    this->m_bEnableMapHitNormalCheck = false;
    this->m_CheckMapHitNormal = 90.00f;
    this->m_bQuaternionFollowsVelocity = false;
    this->m_fQuaternionFollowsVelRate = 0.00f;
    this->m_bWaitMoveStartOnce = false;
    this->m_fMoveStartDelay = 0.00f;
    this->m_bEnableHoming = false;
    this->m_HomingStartDelay = 0.00f;
    this->m_HomingMinDist = 0.00f;
    this->m_bIgnoreHomingZ = false;
    this->m_HomingType = ETresProjectileHomingType::NORMAL;
    this->m_HomingMaxAngle = 0.00f;
    this->m_HomingTurnMax = 0.00f;
    this->m_HomingTurnAccel = 0.00f;
    this->m_HomingMaxTurnMax = 0.00f;
    this->m_HomingTurnMaxCurve = NULL;
    this->m_bHomingTurnMaxCurveLoop = false;
    this->m_HomingMaxAnglePITCH = 0.00f;
    this->m_HomingTurnMaxPITCH = 0.00f;
    this->m_HomingTurnAccelPITCH = 0.00f;
    this->m_HomingMaxTurnMaxPITCH = 0.00f;
    this->m_HomingTurnMaxCurvePITCH = NULL;
    this->m_bHomingTurnMaxCurveLoopPITCH = false;
    this->m_StepUpHeight = 0.00f;
    this->m_HomingTargetActor = NULL;
    this->m_HomingTargetComponent = NULL;
    this->m_bEnableSpin = false;
    this->m_SpinStartDelay = 0.00f;
    this->m_SpinMaxTime = 0.00f;
    this->m_bEnableUpdatedComponentScaleAnim = false;
}

