#include "TresAttack9_e_ex362_MoveDarkVolley.h"

UTresAttack9_e_ex362_MoveDarkVolley::UTresAttack9_e_ex362_MoveDarkVolley() {
    this->m_BulletProjectile = NULL;
    this->m_Warp1EQSQuery = NULL;
    this->m_Warp2EQSQuery = NULL;
    this->m_Teleport1WaitTime = 0.80f;
    this->m_Teleport2WaitTime = 1.70f;
    this->m_EQSWaitTime = 0.10f;
    this->m_BulletNumMax = 0;
    this->m_shotInterval = 0.00f;
    this->m_VariationDegree = 0.00f;
    this->PlayVoiceRate = 0;
    this->m_MoveBack = true;
    this->m_MoveBackEQSQuery = NULL;
    this->m_MoveBackSpeedMax = 2000.00f;
    this->m_MoveBackDist = 1000.00f;
    this->m_MoveBackInitRate = 0.60f;
    this->m_AfterMoveBackSpeed = 0.00f;
    this->m_OnlyAttack2 = false;
    this->m_Attack2PitchZero = false;
    this->m_WarpEQSQuery = NULL;
}

