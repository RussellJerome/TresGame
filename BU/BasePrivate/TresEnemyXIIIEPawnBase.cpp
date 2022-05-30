#include "TresEnemyXIIIEPawnBase.h"

bool ATresEnemyXIIIEPawnBase::IsStartFirstAnnihilation() {
    return false;
}

bool ATresEnemyXIIIEPawnBase::IsMyAnnihilationAttackTurn() {
    return false;
}

bool ATresEnemyXIIIEPawnBase::IsLeaderPawn() {
    return false;
}

bool ATresEnemyXIIIEPawnBase::IsEndAnnihilation() {
    return false;
}

bool ATresEnemyXIIIEPawnBase::IsDuringWarp() {
    return false;
}

bool ATresEnemyXIIIEPawnBase::IsDuringLeaderChangeOrFatalAttackCooldown() {
    return false;
}

bool ATresEnemyXIIIEPawnBase::IsDuringLeaderChangeCooldown() {
    return false;
}

bool ATresEnemyXIIIEPawnBase::IsDuringFatalAttackCooldown() {
    return false;
}

bool ATresEnemyXIIIEPawnBase::IsDebugActiveSecondAnnihilation() {
    return false;
}

bool ATresEnemyXIIIEPawnBase::IsActivatedFirstAnnihilation() {
    return false;
}

void ATresEnemyXIIIEPawnBase::DebugSetLeader(int32 SetLeaderNum) {
}

bool ATresEnemyXIIIEPawnBase::CanUseLeaderChange() {
    return false;
}

bool ATresEnemyXIIIEPawnBase::CanUseFatalAttack() {
    return false;
}

bool ATresEnemyXIIIEPawnBase::CanUseAnnihilation() {
    return false;
}

bool ATresEnemyXIIIEPawnBase::CanStartLeaderChangeOrFatalAttack() {
    return false;
}

ATresEnemyXIIIEPawnBase::ATresEnemyXIIIEPawnBase() {
    this->m_bDebugActiveSecondAnnihilation = false;
    this->m_bIsAreaEPawn = true;
    this->m_RevengePlayVoiceKind = ETresEnemyXIIIEPlayVoiceKind::VoiceAtLocation;
    this->m_RevengeVoice = NULL;
    this->m_VisibleTime = 0.20f;
    this->m_ManagerAsset = NULL;
}

