#include "TresEnemyPawn_e_ex027.h"

float ATresEnemyPawn_e_ex027::GetWheelRotAlpha() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ex027::GetWheelRot() const {
    return 0.0f;
}

FRotator ATresEnemyPawn_e_ex027::GetSweepOutRot() {
    return FRotator{};
}

FVector ATresEnemyPawn_e_ex027::GetSweepOutPos() {
    return FVector{};
}

void ATresEnemyPawn_e_ex027::BP_DebugSetDefaultPos() {
}

ATresEnemyPawn_e_ex027::ATresEnemyPawn_e_ex027() {
    this->m_pro_WheelRotSpeed = 360.00f;
    this->m_pro_PlayerBindReleaseEffData = NULL;
    this->m_PlayerBindReleaseEff = NULL;
}

