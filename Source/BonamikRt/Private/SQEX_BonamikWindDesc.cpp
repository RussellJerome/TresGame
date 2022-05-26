#include "SQEX_BonamikWindDesc.h"

USQEX_BonamikWindDesc::USQEX_BonamikWindDesc() {
    this->m_WindType = ESQEX_Bonamik_WindType_Directional;
    this->m_RandomTime = 0.00f;
    this->m_WaveTime = 0.00f;
    this->m_CustomWaveTime = 0.00f;
    this->m_PointStrength = 0.00f;
    this->m_BlastRange = 0.00f;
    this->m_BlastSpeed = 0.00f;
    this->m_PointRadius = 0.00f;
    this->m_PeakInRange = 0.00f;
    this->m_StartFrame = 0;
    this->m_LoopNum = 0;
}

