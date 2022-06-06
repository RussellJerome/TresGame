#include "TresEnemyPawn_e_fz903.h"

bool ATresEnemyPawn_e_fz903::IsArmour() const {
    return false;
}

void ATresEnemyPawn_e_fz903::BP_StopUserAI(bool Switch) {
}

void ATresEnemyPawn_e_fz903::BP_StartSnowCoverSwing() {
}

void ATresEnemyPawn_e_fz903::BP_StartShakeOffDonald() {
}

void ATresEnemyPawn_e_fz903::BP_SetArmorMorphWeight(float Value) {
}

void ATresEnemyPawn_e_fz903::BP_RunEndSnowCoverSwing() {
}

void ATresEnemyPawn_e_fz903::BP_ReleaseArmorParam() {
}

void ATresEnemyPawn_e_fz903::BP_ProgressSnowCoverSwingStep() {
}

void ATresEnemyPawn_e_fz903::BP_InstallingArmorParam() {
}

FRotator ATresEnemyPawn_e_fz903::BP_GetAnimOffsetValue() const {
    return FRotator{};
}

float ATresEnemyPawn_e_fz903::BP_GetAnimOffsetAlpha() const {
    return 0.0f;
}

void ATresEnemyPawn_e_fz903::BP_ForcedTerminationSnowCoverSwing() {
}

void ATresEnemyPawn_e_fz903::BP_DebugSetBT() {
}

void ATresEnemyPawn_e_fz903::BP_AttackEndSnowCoverSwing() {
}

ATresEnemyPawn_e_fz903::ATresEnemyPawn_e_fz903() {
    this->m_ReleaseArmorActionData = NULL;
    this->m_ShakeOffActionData = NULL;
    this->m_SnowCoverSwingActionData = NULL;
    this->m_AgonizeActionData = NULL;
    this->m_ArmorStateTime = 5.00f;
    this->m_RecastReactionTime = 5.00f;
    this->m_BlowDamageTurnRate = 0.50f;
}

