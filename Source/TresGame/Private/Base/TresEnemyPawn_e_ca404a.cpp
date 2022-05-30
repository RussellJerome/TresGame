#include "TresEnemyPawn_e_ca404a.h"

class ASQEX_SplineActor;
class AActor;

void ATresEnemyPawn_e_ca404a::SetSplineActor(ASQEX_SplineActor* Actor) {
}

void ATresEnemyPawn_e_ca404a::SetMissionStartTime(bool bStart) {
}

void ATresEnemyPawn_e_ca404a::SetGoalActor(AActor* Actor) {
}

bool ATresEnemyPawn_e_ca404a::IsMissionStarted() const {
    return false;
}

float ATresEnemyPawn_e_ca404a::GetTimeSinceMissionStarted() const {
    return 0.0f;
}

void ATresEnemyPawn_e_ca404a::BP_SetStopRunning(bool Value) {
}

bool ATresEnemyPawn_e_ca404a::BP_IsStopRunning() const {
    return false;
}

float ATresEnemyPawn_e_ca404a::BP_GetTargetShipSpeed() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ca404a::BP_GetRestTimeDamageRecovery() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ca404a::BP_GetDistanceToPlayerSideward() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ca404a::BP_GetDistanceToPlayerForward() const {
    return 0.0f;
}

int32 ATresEnemyPawn_e_ca404a::BP_GetCurrentDamageCount() const {
    return 0;
}

ATresEnemyPawn_e_ca404a::ATresEnemyPawn_e_ca404a() {
    this->m_VelocityCurve = NULL;
}

