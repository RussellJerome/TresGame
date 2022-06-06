#include "EX355_ThrowHomingInfo.h"

FEX355_ThrowHomingInfo::FEX355_ThrowHomingInfo() {
    this->m_fInitVelocity = 0.00f;
    this->m_fMaxVelocity = 0.00f;
    this->m_fAccel = 0.00f;
    this->m_fMinHomingDistance = 0.00f;
    this->m_fMaxHomingAngle = 0.00f;
    this->m_fInitHomingRotateVelocity = 0.00f;
    this->m_fMaxHomingRotateVelocity = 0.00f;
    this->m_fHomingRotateAccel = 0.00f;
    this->m_fMaxHomingAngleIgnoreTime = 0.00f;
    this->m_bEnableGrabityOnDisablingHomingToLandTarget = false;
    this->m_fGravityScale = 0.00f;
    this->m_bSpawnNextProjectileOnHomingEnd = false;
    this->m_iMaxRespawnCount = 0;
    this->m_fNextRespawnWaitTime = 0.00f;
    this->m_ProjectileClass = NULL;
}

