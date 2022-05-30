#include "TresAttack4_e_ex360_TeleportCutDown.h"

UTresAttack4_e_ex360_TeleportCutDown::UTresAttack4_e_ex360_TeleportCutDown() {
    this->m_TeleportHight = 0.00f;
    this->m_IsBackAttack = false;
    this->m_UseAvatar = false;
    this->m_TeleportWaitTime = 0.00f;
    this->m_MotStopWaitTIme = 0.20f;
    this->m_ChaseRate = 0.90f;
    this->m_WarpDist = 120.00f;
    this->m_WarpEQSQuery = NULL;
    this->m_NotBlizzard = false;
    this->m_WarpEnd = false;
    this->m_RevengeActionAbortTimingID = ETresAIActionAbortTimingID::ID_None;
    this->PlayVoiceRate = 0;
    this->m_AvaterPawn = NULL;
}

