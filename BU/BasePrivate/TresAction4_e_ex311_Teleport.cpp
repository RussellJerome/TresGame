#include "TresAction4_e_ex311_Teleport.h"

UTresAction4_e_ex311_Teleport::UTresAction4_e_ex311_Teleport() {
    this->m_WarpEQSQuery = NULL;
    this->m_WarpTime = 0.20f;
    this->m_IsPopOnly = false;
    this->m_IsInvisibleOnly = false;
    this->m_VoiceSocketName = TEXT("center");
    this->PlayVoiceRate = 100;
}

