#include "TresAnimNotifyState_Bonamik_SpeedRate.h"

UTresAnimNotifyState_Bonamik_SpeedRate::UTresAnimNotifyState_Bonamik_SpeedRate() {
    this->m_BeginSpeedRate = 1.00f;
    this->m_BeginBlendTime = 0.00f;
    this->m_RestoreOriginalSpeedRate = true;
    this->m_EndSpeedRate = 1.00f;
    this->m_EndBlendTime = 0.00f;
    this->m_ApplyToChildren = true;
}

