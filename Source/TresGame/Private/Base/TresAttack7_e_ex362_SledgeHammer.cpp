#include "TresAttack7_e_ex362_SledgeHammer.h"

UTresAttack7_e_ex362_SledgeHammer::UTresAttack7_e_ex362_SledgeHammer() {
    this->m_BuddyState = NULL;
    this->m_IsDoCancel = false;
    this->m_RotSpeed = 5.00f;
    this->m_InvisibleTerra = false;
    this->m_MoveBack = false;
    this->m_MoveBackEQSQuery = NULL;
    this->m_MoveBackTime = 2.00f;
    this->m_MoveBackSpeedMax = 0.00f;
    this->m_MoveBackDist = 0.00f;
    this->m_MoveBackInitRate = 0.00f;
    this->m_MoveBackAddSpdRate = 3.00f;
    this->m_MoveBackSlowSpdRate = 3.00f;
    this->m_MoveBackRotRate = 0.10f;
    this->m_MoveBackUpdateRotTime = 0.10f;
    this->m_PlayVoice = false;
    this->PlayVoiceRate = 0;
}

