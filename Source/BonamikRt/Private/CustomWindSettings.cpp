#include "CustomWindSettings.h"

FCustomWindSettings::FCustomWindSettings() {
    this->m_WindType = ESQEX_Bonamik_CustomWindType_Directional;
    this->m_RandomTime = 0.00f;
    this->m_WaveTime = 0.00f;
    this->m_PointStrength = 0.00f;
    this->m_BlastRange = 0.00f;
    this->m_BlastSpeed = 0.00f;
    this->m_PointRadius = 0.00f;
    this->m_PeakInRange = 0.00f;
    this->m_StartFrame = 0;
    this->m_LoopNum = 0;
}

