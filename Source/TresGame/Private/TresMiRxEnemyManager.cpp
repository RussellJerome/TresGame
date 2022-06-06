#include "TresMiRxEnemyManager.h"

void ATresMiRxEnemyManager::BP_ToSecondHalf() {
}

void ATresMiRxEnemyManager::BP_SetStateTableIndex(int32 dIndex, float fOverrideCoolDownTime) {
}

void ATresMiRxEnemyManager::BP_SetEnableAttackForLevel(bool bEnable) {
}

void ATresMiRxEnemyManager::BP_RequestFullFireLaser() {
}

void ATresMiRxEnemyManager::BP_RequestActionStart() {
}

bool ATresMiRxEnemyManager::BP_IsSimultaneoutWarpAttackState() const {
    return false;
}

bool ATresMiRxEnemyManager::BP_IsIdleState() const {
    return false;
}

ATresMiRxEnemyManager::ATresMiRxEnemyManager() {
    this->m_fWaitTimeOfShotLaser = 5.00f;
    this->m_fIntervalOfSingleLaserOmen = 0.10f;
    this->m_fIntervalForWarpAttack = 0.50f;
    this->m_fIntervalForSimultaneoutWarpAttack = 0.05f;
    this->m_fIntervalForSimultaneoutWarpAttackReturn = 0.20f;
    this->m_fWaitTimeForStartSimultaneoutWarpAttack = 1.50f;
}

