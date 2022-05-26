#include "TresGumiShipProjectileSequenceData.h"

FTresGumiShipProjectileSequenceData::FTresGumiShipProjectileSequenceData() {
    this->m_fExecuteSec = 0.00f;
    this->m_fHomingAngle = 0.00f;
    this->m_fMovementSpeed = 0.00f;
    this->m_fTargetDotCheckRotation = 0.00f;
    this->m_bTargetLocationPredictable = false;
    this->m_bTargetDotCheckable = false;
    this->m_bReleaseAttach = false;
}

