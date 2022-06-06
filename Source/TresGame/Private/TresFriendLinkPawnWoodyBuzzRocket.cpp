#include "TresFriendLinkPawnWoodyBuzzRocket.h"

ATresFriendLinkPawnWoodyBuzzRocket::ATresFriendLinkPawnWoodyBuzzRocket() {
    this->m_Camera = NULL;
    this->m_pRocket = NULL;
    this->m_WoodyBuzzRocketProj = NULL;
    this->m_fSpawnRadius = 300.00f;
    this->m_fHorizonHeight = 450.00f;
    this->m_ScaleCurveData = NULL;
    this->m_fStartLocZ = 2000.00f;
    this->m_fStartRadius = 190.00f;
    this->m_fRoofDistance = 0.00f;
    this->m_fLoopLocZ = 600.00f;
    this->m_fFinishDistance = 500.00f;
    this->m_fFinishLocZ = 100.00f;
    this->m_fFinishLocBossZ = 100.00f;
    this->m_fMoveSpeed = 1500.00f;
    this->m_fMoveSpeedMin = 900.00f;
    this->m_fMovePitchMaxUp = 70.00f;
    this->m_fMovePitchMaxDown = 70.00f;
    this->m_fMovePitchMaxDownLand = 30.00f;
    this->m_fMovePitchLocZ = 400.00f;
    this->m_fInputPower = 3.00f;
    this->m_bAutoHorizon = false;
    this->m_fAttackSpeed = 3000.00f;
    this->m_fAttackBrake = 6.00f;
    this->m_fAttackEndBrake = 6.00f;
    this->m_fAttackLimitTime = 1.50f;
    this->m_fAttackStopDistance = 30.00f;
    this->m_fAttackStopLimitTime = 0.40f;
    this->m_fTurnToTargetSpeed = 360.00f;
    this->m_fAttackTurnSpeed = 90.00f;
    this->m_fAttackHomingDistance = 0.00f;
    this->m_fAttackDistanceMax = 100.00f;
    this->m_Param_CamBlendTimeST = 0.50f;
    this->m_Param_CamBlendTimeED = 0.50f;
    this->m_Param_CamDistanceLerpPer = 8.00f;
    this->m_bInputReverseX = false;
    this->m_bInputReverseY = false;
    this->m_bEnableBaseCamera = true;
    this->m_bDispDebugInfoMoji = false;
    this->m_BaseCamera = NULL;
}

