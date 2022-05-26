#include "TresRailSlideActor.h"

bool ATresRailSlideActor::BP_IsRailGimmickActive() const {
    return false;
}

void ATresRailSlideActor::BP_DeactivateRailGimmick() {
}

void ATresRailSlideActor::BP_ActivateRailGimmick() {
}

ATresRailSlideActor::ATresRailSlideActor() {
    this->m_fCameraRollRate = 1.00f;
    this->m_RailType = ESQEX_RAIL_SLIDE_TYPE::SQEX_RS_TYPE_NORMAL;
    this->m_LinkedActor = NULL;
    this->m_RevLinkedActor = NULL;
    this->m_StartDir = ESQEX_RAIL_SLIDE_DIR::SQEX_RS_DIR_BOTH;
    this->m_DetectRangePlus = 0.00f;
    this->m_bDisableReverse = false;
    this->m_bDisableActAttack = false;
    this->m_bDisableActJump = false;
    this->m_bDisableActAirSlide = false;
    this->m_bDisableActAthleticFlowMove = false;
    this->m_bDisableActTransferOnRelativeJump = true;
    this->m_bDisableSpawnRailSlideConnectTo = false;
    this->m_bDestroyAfterThePassage = false;
    this->m_bIsNarrow = false;
    this->m_bIsDisableAction = false;
    this->m_JumpLimitType = ESQEX_SplineJumpLimitType::SQEX_SJLTYPE_NONE;
    this->m_bSetSlideSpeed = false;
    this->m_bResetAccDec = false;
    this->m_SetSlideSpeed = 2000.00f;
    this->m_SetRevSlideSpeed = 2000.00f;
    this->m_bSetSpeedAccDec = false;
    this->m_SetSpeedRateMin = 1.00f;
    this->m_SetSpeedRateMax = 1.00f;
    this->m_SetSpeedAccRate = 3.00f;
    this->m_SetSpeedDecRate = 0.50f;
    this->m_SetRevSpeedAccRate = 3.00f;
    this->m_SetRevSpeedDecRate = 0.50f;
    this->m_bGenerateNavData = false;
    this->m_NavLinkSpacing = 500.00f;
    this->m_bGenerateJumpNavLink = false;
    this->m_bTiltNavMeshCollisionBoxes = true;
    this->m_bNavGeometryDirty = true;
}

