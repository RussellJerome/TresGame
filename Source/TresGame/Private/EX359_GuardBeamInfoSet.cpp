#include "EX359_GuardBeamInfoSet.h"

FEX359_GuardBeamInfoSet::FEX359_GuardBeamInfoSet() {
    this->m_fSpawnWaitTime = 0.00f;
    this->m_iBeamSpawnNum = 0;
    this->m_fHomingAccel = 0.00f;
    this->m_fHomingMaxVelocity = 0.00f;
    this->m_fRotateAccel = 0.00f;
    this->m_fRotateMaxVelocity = 0.00f;
    this->m_fSpreadWaitTime = 0.00f;
    this->m_fSpreadTime = 0.00f;
    this->m_fSpreadRadius = 0.00f;
    this->m_fOpenWaitTime = 0.00f;
    this->m_fOpenTime = 0.00f;
    this->m_fOpenRadius = 0.00f;
    this->m_OpenDirType = EEX359_SpawnDirType_Self;
    this->m_fOpenDirOffset = 0.00f;
    this->m_fOpenDirDetermineTime = 0.00f;
    this->m_bDetermineOpenDirByTime = false;
    this->m_iOpenBeamNum = 0;
    this->m_fShotWaitTime = 0.00f;
    this->m_Owner = NULL;
    this->m_Target = NULL;
    this->m_SpawnActor = NULL;
}

