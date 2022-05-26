#include "TresEnemyXIIILEPawnBase.h"

void ATresEnemyXIIILEPawnBase::OnDtorStateCallBackXIIIE(TEnumAsByte<ETresStateID> inStateID) {
}

void ATresEnemyXIIILEPawnBase::OnCtorStateCallBackXIIIE(TEnumAsByte<ETresStateID> inStateID) {
}

bool ATresEnemyXIIILEPawnBase::IsDuringWarp() {
    return false;
}

ATresEnemyXIIILEPawnBase::ATresEnemyXIIILEPawnBase() {
    this->m_RevengePlayVoiceKind = ETresEnemyXIIILEPlayVoiceKind::VoiceAtLocation;
    this->m_VisibleTime = 0.20f;
}

