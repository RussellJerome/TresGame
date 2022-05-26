#include "TresUIP_HudRight.h"

int32 UTresUIP_HudRight::OnCallback(int32 ID, int32 Param) {
    return 0;
}

UTresUIP_HudRight::UTresUIP_HudRight() {
    this->m_MissionCounter = NULL;
    this->m_NaviMap = NULL;
    this->m_EnmHpPack = NULL;
    this->m_Timer = NULL;
    this->m_KairiCounter = NULL;
}

