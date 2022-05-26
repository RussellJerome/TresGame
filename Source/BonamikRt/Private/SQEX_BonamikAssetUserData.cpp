#include "SQEX_BonamikAssetUserData.h"

USQEX_BonamikAssetUserData::USQEX_BonamikAssetUserData() {
    this->m_bAlwaysUse60FPSsetting = false;
    this->TeleportDistance = 0.00f;
    this->bAccurateBoundsUpdate = false;
    this->PreRollStepOnResume = 0;
    this->OutOfCamera = ESQEX_Bonamik_OutOfCamera_UseGlobal;
}

