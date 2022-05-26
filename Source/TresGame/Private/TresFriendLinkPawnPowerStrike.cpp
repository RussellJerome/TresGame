#include "TresFriendLinkPawnPowerStrike.h"

ATresFriendLinkPawnPowerStrike::ATresFriendLinkPawnPowerStrike() {
    this->m_SwingSpeed = -1260.00f;
    this->m_SwingUpSpeed = -1800.00f;
    this->m_SwingDownSpeed = 50.00f;
    this->m_JumpRange = 600.00f;
    this->m_MinJumpPower = 400.00f;
    this->m_MaxJumpPower = 1400.00f;
    this->m_DefaultJumpPower = 900.00f;
    this->m_fFallTimer = 0.08f;
    this->m_PowerStrikeProjExp = NULL;
    this->m_ScaleCurveData = NULL;
    this->m_fFinishMoveSpeed = 3000.00f;
    this->m_fFinishMoveAccel = 3000.00f;
    this->m_fFinishHeight = 1600.00f;
    this->m_fFinishRange = 900.00f;
    this->m_fFinishMinRange = 100.00f;
    this->m_fFinishMinMoveRange = 600.00f;
    this->m_fFinishFallLimitTimer = 5.00f;
    this->m_fFinishCheckCollision = 40.00f;
    this->m_fFinishMeshRotateRate = 6.00f;
    this->m_fFinishMeshRotatePitch = 90.00f;
    this->m_bFinishWarpCheck = false;
    this->m_vPlayerUpMoveSpeed = 1600.00f;
    this->m_vPlayerUpMoveMaxSpeed = 2000.00f;
    this->m_vPlayerUpMoveAccelTime = 1.00f;
    this->m_bDisableOverlappedForce = true;
    this->m_bHe904DisableCollsion = false;
    this->m_fHe904CollRadius = 410.00f;
    this->m_fHe904CollHeight = 300.00f;
    this->m_Param_CamDistanceFinish = 1000.00f;
    this->m_Param_CamBlendTimeST = 0.50f;
    this->m_Param_CamBlendTimeED = 0.50f;
    this->m_Camera = NULL;
    this->m_FinishCamera = NULL;
    this->m_pProjectileExp = NULL;
}

