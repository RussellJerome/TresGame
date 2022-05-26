#include "TresFriendLinkPawnFlareForce.h"

ATresFriendLinkPawnFlareForce::ATresFriendLinkPawnFlareForce() {
    this->m_bUseHopeRange = true;
    this->m_fFinishHopeRange = 1500.00f;
    this->m_nLockOnMaxNum = 4;
    this->m_fMaxSpeed = 1500.00f;
    this->m_fLifeTime = 10.00f;
    this->m_fHomingRange = 1000.00f;
    this->m_fHomingAngle = 240.00f;
    this->m_fHomingUpdateRange = 500.00f;
    this->m_fDisappearCameraTimer = 0.20f;
    this->m_fDisappearCameraInterpolate = 0.40f;
    this->m_fAppearPitch = -60.00f;
    this->m_fAppearScale = 5.00f;
    this->m_fTargetHeight_3 = 2000.00f;
    this->m_fTargetHeight_2 = 1000.00f;
    this->m_MissileProj = NULL;
    this->m_MissileExpProj = NULL;
    this->m_AppearCurveData = NULL;
    this->m_FireCurveData = NULL;
    this->m_fAppearCameraHeight = 300.00f;
    this->m_fAppearCameraRange = 300.00f;
    this->m_fAppearCameraOffset = 0.00f;
    this->m_fLandCameraOffset = 20.00f;
    this->m_bDispCollisionError = false;
    this->m_pDummyTarget = NULL;
}

