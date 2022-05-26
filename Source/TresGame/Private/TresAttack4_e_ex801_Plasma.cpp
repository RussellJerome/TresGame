#include "TresAttack4_e_ex801_Plasma.h"

UTresAttack4_e_ex801_Plasma::UTresAttack4_e_ex801_Plasma() {
    this->m_StartAnimData = NULL;
    this->m_LoopAnimData = NULL;
    this->m_EndAnimData = NULL;
    this->m_ProjectileClass = NULL;
    this->m_CollisionCenterHeight = 0.00f;
    this->m_PlasmaEffect = NULL;
    this->m_EnvQuery = NULL;
    this->m_NumPlasma = 0;
    this->m_MinRange = 0.00f;
    this->m_MaxRange = 0.00f;
    this->m_LoopTime = 0.00f;
    this->m_StartTargetDistance = 0.00f;
    this->m_Speed = 0.00f;
    this->m_FollowGiveUpTime = 0.00f;
    this->m_bEnableAlwaysTargetMove = true;
    this->m_TurnSpeed = 0.00f;
}

