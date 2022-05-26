#include "TresStylePawnSHPegasus.h"

float ATresStylePawnSHPegasus::GetDeltaYaw() const {
    return 0.0f;
}

ATresStylePawnSHPegasus::ATresStylePawnSHPegasus() {
    this->m_bDispDebugLine = false;
    this->m_ProjThunder = NULL;
    this->m_SHChariotAssets = NULL;
    this->m_pTargetActor = NULL;
    this->m_pNextActor = NULL;
}

