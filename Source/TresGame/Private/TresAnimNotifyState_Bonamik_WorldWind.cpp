#include "TresAnimNotifyState_Bonamik_WorldWind.h"

UTresAnimNotifyState_Bonamik_WorldWind::UTresAnimNotifyState_Bonamik_WorldWind() {
    this->m_WindType = ESQEX_Bonamik_WindType_Notify_Directional;
    this->m_AreaType = ESQEX_Bonamik_WindAreaType_Global;
    this->m_BonamikWindGlobalAddition = true;
    this->m_SphereRadius = 500.00f;
    this->m_AreaMargin = 0.00f;
    this->m_RandomTime = 1.00f;
    this->m_BlastStrength = 100.00f;
    this->m_PeakInRange = 0.50f;
    this->m_BlastRange = 100.00f;
    this->m_BlastSpeed = 100.00f;
    this->m_LoopNum = 1;
    this->m_StartFrame = 0;
}

