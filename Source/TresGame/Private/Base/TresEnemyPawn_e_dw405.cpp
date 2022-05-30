#include "TresEnemyPawn_e_dw405.h"

void ATresEnemyPawn_e_dw405::NotifyBattleStart() {
}

bool ATresEnemyPawn_e_dw405::IsStyleChange() const {
    return false;
}

FVector ATresEnemyPawn_e_dw405::GetLookAtLocation() const {
    return FVector{};
}

int32 ATresEnemyPawn_e_dw405::GetBattleCount() const {
    return 0;
}

void ATresEnemyPawn_e_dw405::DebugSetActionNo(int32 NO) {
}

void ATresEnemyPawn_e_dw405::BP_EnableBonamikAppear() {
}

void ATresEnemyPawn_e_dw405::BP_DisableBonamikAppear() {
}

void ATresEnemyPawn_e_dw405::BP_DebugStyleChangeEnd() {
}

void ATresEnemyPawn_e_dw405::BP_DebugSetBT(int32 Index) {
}

void ATresEnemyPawn_e_dw405::BP_DebugDisAppear() {
}

void ATresEnemyPawn_e_dw405::BP_DebugAppear() {
}

ATresEnemyPawn_e_dw405::ATresEnemyPawn_e_dw405() {
    this->m_BattleCount = TRES_ENEMY_DW405_BATTLECOUNT_ONE;
    this->m_bEnableStartDisappear = true;
    this->m_EffectDataAsset = NULL;
    this->m_AuraEffectDataAsset = NULL;
    this->m_bEnableLockon = true;
    this->m_AvatarClass = NULL;
    this->m_BarrierCrackerProjectile = NULL;
    this->m_Projectile = NULL;
    this->m_MagicShotHitEffect = NULL;
    this->m_PawnHitEffect = NULL;
    this->m_PawnDirectHitEffect = NULL;
    this->m_ActionDefClass = NULL;
    this->m_NumDamageAirRecovery = 3;
    this->m_DesertionIndex = 1;
    this->m_DesertionAnimStopOffsetTime = 0.00f;
    this->m_DesertionFadeStartOffsetTime = 0.30f;
    this->m_DesertionFadeTime = 0.15f;
    this->m_AirSmallDamageAfterDisappearTime = 0.00f;
    this->m_LandReflectAfterDisappearTime = 0.00f;
    this->m_AirReflectAfterDisappearTime = 0.00f;
    this->m_BindAfterDisappearTime = 0.00f;
    this->m_BarrierCrackerDamageAfterDisappearTime = 0.00f;
    this->m_ChanceStateClass = NULL;
    this->m_DieVoice = NULL;
    this->m_VolumeMultiplier = 1.00f;
    this->m_PitchMultiplier = 1.00f;
    this->m_bFollow = true;
    this->m_EnableDrawDebugDistance = false;
    this->m_DebugDisableBonamikDistance = 0.00f;
    this->m_bDebugEnableAttackClassSetting = false;
    this->m_bDebugEnableAvatarShowParam = false;
    this->m_bDisableAvatarAppear = false;
}

