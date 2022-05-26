#include "TresBonamikCollisionVolume.h"

ATresBonamikCollisionVolume::ATresBonamikCollisionVolume() {
    this->m_ControlBonamikCollision = true;
    this->m_ControlBonamikWeightAndEnable = false;
    this->m_AllowMultipleOverlaps = false;
    this->m_FixForGigasMesh = false;
    this->m_DisableHighFPSEvaluation = true;
}

