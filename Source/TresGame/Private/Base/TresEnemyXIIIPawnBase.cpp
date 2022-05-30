#include "TresEnemyXIIIPawnBase.h"

void ATresEnemyXIIIPawnBase::NotifyChangePhase(ETresEnemyXIIIPhaseType InNewPhaseType) {
}

bool ATresEnemyXIIIPawnBase::IsDuringCoopActionCooldown() {
    return false;
}

bool ATresEnemyXIIIPawnBase::IsDuringAlertCooldown() {
    return false;
}

bool ATresEnemyXIIIPawnBase::IsAnnoyingAttackToPlayer() {
    return false;
}

int32 ATresEnemyXIIIPawnBase::GetPhaseNo() const {
    return 0;
}


ATresEnemyXIIIPawnBase::ATresEnemyXIIIPawnBase() {
    this->m_UniqueEffectDataAsset = NULL;
    this->m_FirstPhaseType = ETresEnemyXIIIPhaseType::PHASE1;
    this->m_PhaseChangeHitPointMinRateList[0] = 0.00f;
    this->m_PhaseChangeHitPointMinRateList[1] = 0.00f;
    this->m_PhaseChangeHitPointMinRateList[2] = 0.00f;
    this->m_PhaseChangeHitPointMinRateList[3] = 0.00f;
    this->m_PhaseChangeHitPointMinRateList[4] = 0.00f;
    this->m_RetryStartHitPointRateList[0] = 1.00f;
    this->m_RetryStartHitPointRateList[1] = 1.00f;
    this->m_RetryStartHitPointRateList[2] = 1.00f;
    this->m_RetryStartHitPointRateList[3] = 1.00f;
    this->m_RetryStartHitPointRateList[4] = 1.00f;
    this->m_bDebugEnableForcePhaseType = false;
    this->m_DebugForcePhaseType = ETresEnemyXIIIPhaseType::PHASE1;
    this->m_bDebugEnableForceCenterLocation = false;
    this->m_PhaseType = ETresEnemyXIIIPhaseType::PHASE1;
    this->m_RetryInheritParam = NULL;
}

