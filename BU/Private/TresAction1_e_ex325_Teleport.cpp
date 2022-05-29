#include "TresAction1_e_ex325_Teleport.h"

UTresAction1_e_ex325_Teleport::UTresAction1_e_ex325_Teleport() {
    this->m_TeleportWaitTime = 0.20f;
    this->m_IsPopOnly = false;
    this->m_IsInvisibleOnly = false;
    this->m_WarpEQSQuery = NULL;
    this->m_WarpEQSQueryMinRadius = 800.00f;
    this->m_WarpEQSQueryMaxRadius = 1000.00f;
    this->m_IsLandWarp = true;
    this->m_IsDarkRushBeforeWarp = false;
    this->m_VoiceSocketName = TEXT("center");
    this->PlayVoiceRate = 100;
}

