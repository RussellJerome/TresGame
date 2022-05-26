#include "TresAttack1_e_ex005_DrillAttack.h"

UTresAttack1_e_ex005_DrillAttack::UTresAttack1_e_ex005_DrillAttack() {
    this->m_SandCloudEffectData = NULL;
    this->m_LandDecalEffectData = NULL;
    this->m_LandDecalLimitHeight = 300.00f;
    this->m_JumpHeight = 150.00f;
    this->m_MaxSpeed = 2500.00f;
    this->m_MoveTime = 0.30f;
    this->m_DecelMoveSpeed = 3000.00f;
    this->m_MinMoveSpeed = 0.00f;
    this->m_LimitHeight = 500.00f;
    this->m_LimitMinHeight = 300.00f;
    this->m_GravityScale = 5.00f;
    this->m_MinMoveDistance = 1000.00f;
    this->m_MaxMoveDistance = 1500.00f;
    this->m_SandCloudEffectComponent = NULL;
    this->m_LandDecalEffectComponent = NULL;
}

