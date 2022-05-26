#include "TresProjectileSpawnData.h"

FTresProjectileSpawnData::FTresProjectileSpawnData() {
    this->m_GenerateClass = NULL;
    this->m_CheckType = ETresProjectileRespawnType::TPR_TYPE_HIT_ALWAYS;
    this->m_RotInheritType = ETresProjectileRespawnRotType::TPRR_NORMAL;
    this->m_CheckRange = 0.00f;
    this->m_bOnGroundOnly = false;
    this->m_bBlockByWaterSurface = false;
    this->m_bTakeOverAtkTarget = false;
    this->m_bTakeOverAtkCollHitList = false;
    this->m_bTakeOverAtkCollFinishFlag = false;
    this->m_bIgnoreSendShutdownMsgToOwner = false;
    this->m_bTakeOverEffectColorParam = false;
    this->m_bTakeOverEffectAlphaParam = false;
}

