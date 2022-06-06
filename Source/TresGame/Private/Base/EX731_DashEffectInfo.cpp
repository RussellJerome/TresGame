#include "EX731_DashEffectInfo.h"

FEX731_DashEffectInfo::FEX731_DashEffectInfo() {
    this->m_iNotifyParam = 0;
    this->m_DashEffectClass = NULL;
    this->m_fWorldGroundHeight = 0.00f;
    this->m_fDashEffectSpawnHeight = 0.00f;
    this->m_bDashEffectLoopSpawn = false;
    this->m_fDashEffectSpawnInterval = 0.00f;
    this->MyCharPawn = NULL;
}

