#include "TresFriendLinkPawnSpinningHold.h"

ATresFriendLinkPawnSpinningHold::ATresFriendLinkPawnSpinningHold() {
    this->m_fFinishHeight = 850.00f;
    this->m_fFinishRange = 520.00f;
    this->m_fFinishMinRange = 250.00f;
    this->m_fFinishMinMoveRange = 650.00f;
    this->m_fCheckRadius = 60.00f;
    this->m_fFinishAddPitch = 10.00f;
    this->m_fFinishAddYaw = 20.00f;
    this->m_fFriendCheckRange = 1000.00f;
    this->m_fFriendMinRange = 400.00f;
    this->m_fFriendMaxRange = 1200.00f;
    this->m_fFriendCheckYaw = -40.00f;
    this->m_fHairSwingAlpha212 = 0.27f;
    this->m_fHairSwingAlpha215 = 0.69f;
    this->m_fDisappearTimer = 1.00f;
    this->m_bUseHopeRange = true;
    this->m_fFinishHopeRange = 1400.00f;
    this->m_fLandOffset = 100.00f;
    this->m_fLandLimit = 35.00f;
    this->m_fAppearMoveRange = 500.00f;
    this->m_fAppearHeight = 200.00f;
    this->m_LightBallProj = NULL;
    this->m_LightBallExpProj = NULL;
    this->m_fAppearCameraHeight = 270.00f;
    this->m_fAppearCameraRange = 480.00f;
    this->m_fAppearCameraOffset = 20.00f;
    this->m_fFinishCameraRange = 700.00f;
    this->m_fFinishCameraOffset = 200.00f;
    this->m_pDummyTarget = NULL;
}

