#include "TresAttack4_e_ex311_TeleportCutDown.h"

UTresAttack4_e_ex311_TeleportCutDown::UTresAttack4_e_ex311_TeleportCutDown() {
    this->m_TeleportHight = 0.00f;
    this->m_TeleportPosOffset = 20.00f;
    this->m_IsBackAttack = false;
    this->m_UseAvatar = false;
    this->m_TeleportWaitTime = 0.00f;
    this->m_Avatar = NULL;
    this->m_WarpEQSQuery = NULL;
    this->m_VoiceSocketName = TEXT("center");
    this->PlayVoiceRate = 100;
    this->m_IsCoopAction = false;
}

