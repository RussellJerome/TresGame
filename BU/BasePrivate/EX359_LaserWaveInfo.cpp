#include "EX359_LaserWaveInfo.h"

FEX359_LaserWaveInfo::FEX359_LaserWaveInfo() {
    this->m_fProjSpawnStartWaitTime = 0.00f;
    this->m_iMaxProjNum = 0;
    this->m_fProjSpawnInterval = 0.00f;
    this->m_fProjSpawnDistance = 0.00f;
    this->m_Owner = NULL;
    this->m_Target = NULL;
    this->m_SpawnActor = NULL;
}

