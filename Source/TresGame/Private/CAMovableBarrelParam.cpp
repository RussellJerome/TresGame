#include "CAMovableBarrelParam.h"

FCAMovableBarrelParam::FCAMovableBarrelParam() {
    this->m_prizeKind = ETresDropItemID::None;
    this->m_directionChangeInterval = 0.00f;
    this->m_turnRate = 0.00f;
    this->m_turnRateOnHitWall = 0.00f;
    this->m_turnRateTimeOnHitWall = 0.00f;
    this->m_moveRange = 0.00f;
    this->m_defaultVelocity = 0.00f;
    this->m_maxDeltaAngle = 0.00f;
    this->m_MaxHitPoint = 0;
    this->m_spawnPrizeNumForDead = 0;
    this->m_spawnPrizeNumForNormalAttack = 0;
    this->m_spawnPrizeNumPerDamageInAttraction = 0;
    this->m_prizeSpawnUpDirectionOffset = 0.00f;
    this->m_naviMeshExtent = 0.00f;
    this->m_bodyCollMargin = 0.00f;
    this->m_minSpeedScaleOnAvoidPlayer = 0.00f;
    this->m_declVelocityRate = 0.00f;
    this->m_yawMaxSpeed = 0.00f;
    this->m_bRunningAwayMode = false;
    this->m_bUseNaviMesh = false;
    this->m_bStopMovement = false;
}

