#include "EX359_LaserInfo.h"

FEX359_LaserInfo::FEX359_LaserInfo() {
    this->m_iNotify = 0;
    this->m_pProjClass = NULL;
    this->m_bPolarSpawnLocOffset = false;
    this->m_SpawnLocType = EEX359_SpawnLocType_Self;
    this->m_SpawnDirType = EEX359_SpawnDirType_Self;
    this->m_fSpawnDirYawOffset = 0.00f;
    this->m_fLifeTime = 0.00f;
    this->m_bLifeTime = false;
    this->m_bIgnoreSameIndexHit = false;
}

