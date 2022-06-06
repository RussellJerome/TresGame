#include "TresFriendLinkPawnGiantSoldier.h"

ATresFriendLinkPawnGiantSoldier::ATresFriendLinkPawnGiantSoldier() {
    this->m_fMaxWalkSpeed = 700.00f;
    this->m_fJumpPower = 2000.00f;
    this->m_fFallTimer = 0.07f;
    this->m_fAttackMoveSpeed = 450.00f;
    this->m_fAttackTurnSpeed = 20.00f;
    this->m_fAttackVoiceWaitTimer = 5.00f;
    this->m_fDetachPlayerMeshRate = 15.00f;
    this->m_AtkCollProj = NULL;
    this->m_Param_CamDistanceNormal = 800.00f;
    this->m_Param_CamTurningPower = 0.00f;
    this->m_Param_CamBlendTimeST = 0.30f;
    this->m_Param_CamBlendTimeED = 0.30f;
    this->m_fAppearCameraHeight = 300.00f;
    this->m_fAppearCameraRange = 500.00f;
    this->m_fAppearCameraOffset = 100.00f;
    this->m_fLandCameraOffset = 20.00f;
    this->m_bDispCollisionError = false;
    this->m_Camera = NULL;
    this->m_pProjectile = NULL;
}

