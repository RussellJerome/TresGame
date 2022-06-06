#include "TresAttack4_e_ex002_Dash.h"

UTresAttack4_e_ex002_Dash::UTresAttack4_e_ex002_Dash() {
    this->m_StartAnimData = NULL;
    this->m_LoopAnimData = NULL;
    this->m_EndAnimData = NULL;
    this->m_SuccessAnimData = NULL;
    this->m_HitWallAnimData = NULL;
    this->m_WallReflectRightAnimData = NULL;
    this->m_WallReflectLeftAnimData = NULL;
    this->m_MaxMoveSpeed = 2000.00f;
    this->m_DashAmount = 1000.00f;
    this->m_bSkipStartMotionOnAppear = false;
}

