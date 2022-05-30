#include "TresEnemyXIIIBPawnBase.h"

bool ATresEnemyXIIIBPawnBase::IsStun_e_ex307() const {
    return false;
}

bool ATresEnemyXIIIBPawnBase::IsDuringCoopActionCooldown_Phase3() {
    return false;
}

bool ATresEnemyXIIIBPawnBase::IsDuringCoopActionCooldown_Phase2() {
    return false;
}

bool ATresEnemyXIIIBPawnBase::IsCardEscape() const {
    return false;
}

void ATresEnemyXIIIBPawnBase::DebugSetEnableAlwaysCardScapegoat(int32 bEnable) {
}

void ATresEnemyXIIIBPawnBase::DebugSetDefaultBT() {
}

ATresEnemyXIIIBPawnBase::ATresEnemyXIIIBPawnBase() {
    this->m_VanishModeEndTime = 1.00f;
    this->m_VanishModeEndQuery = NULL;
    this->m_SmokeCardParticleSystem = NULL;
}

