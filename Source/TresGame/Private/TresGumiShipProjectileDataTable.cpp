#include "TresGumiShipProjectileDataTable.h"

FTresGumiShipProjectileDataTable::FTresGumiShipProjectileDataTable() {
    this->m_fMovementSpeed = 0.00f;
    this->m_fRange = 0.00f;
    this->m_fHomingAngle = 0.00f;
    this->m_fDoHomingInDegree = 0.00f;
    this->m_pMuzzleFlashEffect = NULL;
    this->m_bDoWarpHitLocation = false;
    this->m_bTargetLocationPredictable = false;
}

