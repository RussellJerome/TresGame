#include "TresFriendLinkPawnCallMeteor.h"

ATresFriendLinkPawnCallMeteor::ATresFriendLinkPawnCallMeteor() {
    this->m_fFinishRange = 1500.00f;
    this->m_fBaseSpeed = 1500.00f;
    this->m_fWhiteOutTimer = 1.50f;
    this->m_fWhiteInTimer = 2.50f;
    this->m_fDisappearFade = -8.00f;
    this->m_fAppearFade = 8.00f;
    this->m_fAppearScale = 5.00f;
    this->m_fAppearRange = 800.00f;
    this->m_fAppearHeight = 1000.00f;
    this->m_bAppearNoHitWall = false;
    this->m_bUseHopeRange = true;
    this->m_fFinishHopeRange = 1000.00f;
    this->m_fFinishMaxRange = 10000.00f;
    this->m_MeteorProj = NULL;
    this->m_MeteorExpProj = NULL;
    this->m_ShakeCurveData = NULL;
    this->m_FireEffect = NULL;
    this->m_FadeEffect = NULL;
    this->m_fAppearCameraHeight = 300.00f;
    this->m_fAppearCameraRange = 300.00f;
    this->m_fAppearCameraOffset = 0.00f;
    this->m_fFinishCameraHeight = 300.00f;
    this->m_fFinishCameraRange = 300.00f;
    this->m_fFinishCameraOffset = 1000.00f;
    this->m_fFinishCameraYaw = 0.00f;
    this->m_fLandCameraOffset = 20.00f;
    this->m_bDispCollisionError = false;
    this->m_pDummyTarget = NULL;
    this->m_pProjectileExp = NULL;
}

