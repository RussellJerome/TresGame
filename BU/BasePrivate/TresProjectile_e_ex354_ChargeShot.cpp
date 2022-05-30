#include "TresProjectile_e_ex354_ChargeShot.h"

ATresProjectile_e_ex354_ChargeShot::ATresProjectile_e_ex354_ChargeShot() {
    this->m_fMinBoundDistance = 0.00f;
    this->m_fMaxBoundDistance = 100000.00f;
    this->m_fMinBoundAngle = 0.00f;
    this->m_fMaxBoundAngle = 180.00f;
    this->m_fMinDistance_NoTarget = 0.00f;
    this->m_fBeforeTargetDistance = 0.00f;
    this->m_fMinCameraYawOffset = 10.00f;
    this->m_fMaxCameraYawOffset = 90.00f;
    this->m_fBeforeTargetAdjustMaxTargetVelocity = 0.00f;
    this->m_fBeforeTargetLocAdjustTargetVelocityRate = 0.00f;
    this->m_bAimTargetWithVelocity = true;
    this->m_bIgnoreAngleRestrictionOnBound = false;
    this->m_bIgnoreDistanceRestrictionOnBound = false;
    this->m_ShotEffect = NULL;
    this->m_BoundEffect = NULL;
    this->m_bRayTraceHitCheck = false;
    this->m_bDebugDisp = false;
    this->m_bDebugDisp_BoundLoc = false;
    this->m_bNoUseEQS = false;
    this->m_bUseEQSOnly = false;
    this->m_fTargetSameHeightRange = 100.00f;
    this->m_fNextAirBoundHeightOffset = 0.00f;
    this->m_bIgnoreFirstRelectPosOutofScreen = false;
    this->DodgeType = TRDT_NONE;
    this->m_EntryTime = 1.00f;
    this->m_LimitAngle = 180.00f;
    this->m_Target = NULL;
}

