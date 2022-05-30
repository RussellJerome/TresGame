#include "TresEnemyPawn_e_ca405.h"

void ATresEnemyPawn_e_ca405::SetMissionStartTime(bool bStart) {
}

bool ATresEnemyPawn_e_ca405::IsMissionStarted() const {
    return false;
}

bool ATresEnemyPawn_e_ca405::IsMaelstromMode() const {
    return false;
}

void ATresEnemyPawn_e_ca405::InitializeMission(const FVector initPlayerLocation, int32 initMode) {
}

float ATresEnemyPawn_e_ca405::GetTimeSinceMissionStarted() const {
    return 0.0f;
}

int32 ATresEnemyPawn_e_ca405::GetLocationMode() const {
    return 0;
}

int32 ATresEnemyPawn_e_ca405::GetHitPointOfMaelstromMode() const {
    return 0;
}

ATresEnemyPawn_e_ca405::ATresEnemyPawn_e_ca405() {
    this->m_RotCurve = NULL;
    this->m_RotCurveTime = 5.00f;
    this->m_bMaelstromMode = false;
    this->m_ShipTrackParticle = NULL;
    this->m_DestroyShipTrackNotifyID = 10006405;
    this->m_InvincibleOnNotifyID = 20006405;
    this->m_CreateShipTrackNotifyID = 10007405;
    this->m_InvincibleOffNotifyID = 20007405;
    this->m_ShipTrackParticleComp = NULL;
}

