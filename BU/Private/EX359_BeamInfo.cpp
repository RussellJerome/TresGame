#include "EX359_BeamInfo.h"

FEX359_BeamInfo::FEX359_BeamInfo() {
    this->m_iNotify = 0;
    this->m_pProjClass = NULL;
    this->m_pProjClass_FinalBrake = NULL;
    this->m_bPolarSpawnLocOffset = false;
    this->m_fSpawnLocPolarYawOffset = 0.00f;
    this->m_SpawnLocType = EEX359_SpawnLocType_Self;
    this->m_SpawnDirType = EEX359_SpawnDirType_Self;
    this->m_fSpawnDirYawOffset = 0.00f;
    this->m_fLifeTime = 0.00f;
    this->m_bLifeTime = false;
    this->m_bIgnoreSameIndexHit = false;
}

