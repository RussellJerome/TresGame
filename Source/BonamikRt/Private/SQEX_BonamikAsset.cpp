#include "SQEX_BonamikAsset.h"

USQEX_BonamikAsset::USQEX_BonamikAsset() {
    this->m_SkeletalMesh = NULL;
    this->m_VersionNo = 0;
    this->m_TotalKinematics = 0;
    this->m_TotalConstraints = 0;
    this->m_TotalCones = 0;
    this->m_TotalLinks = 0;
    this->m_TotalCollisions = 0;
    this->m_TotalSelfCollisions = 0;
    this->m_TotalChainRootParticles = 0;
    this->m_TotalPCLinkCones = 0;
    this->m_TotalLateralLinkCones = 0;
    this->m_bAlwaysUse60FPSsetting = false;
    this->m_TeleportDistance = 0.00f;
    this->m_BonamikAccurateBoundsUpdate = false;
    this->m_PreRollStepOnResume = 0;
}

