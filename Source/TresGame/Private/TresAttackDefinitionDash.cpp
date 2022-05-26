#include "TresAttackDefinitionDash.h"

UTresAttackDefinitionDash::UTresAttackDefinitionDash() {
    this->m_StartAnimData = NULL;
    this->m_LoopAnimData = NULL;
    this->m_EndAnimData = NULL;
    this->m_SuccessAnimData = NULL;
    this->m_HitWallAnimData = NULL;
    this->m_WallReflectRightAnimData = NULL;
    this->m_WallReflectLeftAnimData = NULL;
    this->m_MaxMoveSpeed = 2000.00f;
    this->m_DashLimit = ETresDashLimit::Distance;
    this->m_DashAmount = 1000.00f;
    this->m_HitWallAction = ETresHitWallAction::None;
    this->m_AffectGravity = false;
}

