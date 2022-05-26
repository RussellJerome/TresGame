#include "TresEnemyPawn_e_ex354.h"

void ATresEnemyPawn_e_ex354::SetDebugDispFlag(int32 InIndex) {
}

bool ATresEnemyPawn_e_ex354::IsZeroMagazine() {
    return false;
}

bool ATresEnemyPawn_e_ex354::IsWarpShotMagazine() {
    return false;
}

bool ATresEnemyPawn_e_ex354::IsReflectDamageShotMagazine() {
    return false;
}

bool ATresEnemyPawn_e_ex354::IsQuickBattleEndWaiting() const {
    return false;
}

bool ATresEnemyPawn_e_ex354::IsPartnerDead() {
    return false;
}

bool ATresEnemyPawn_e_ex354::IsNowKeepBodyCollReaction() const {
    return false;
}

bool ATresEnemyPawn_e_ex354::IsNowDestroyChargeShotOnDamage() const {
    return false;
}

bool ATresEnemyPawn_e_ex354::IsNormalShotMagazine() {
    return false;
}

bool ATresEnemyPawn_e_ex354::IsNoAppearOnRevengeWarp() const {
    return false;
}

bool ATresEnemyPawn_e_ex354::IsHitOnCounterAttackWait() const {
    return false;
}

bool ATresEnemyPawn_e_ex354::IsFlyMode() const {
    return false;
}

bool ATresEnemyPawn_e_ex354::IsField_Standard() const {
    return false;
}

bool ATresEnemyPawn_e_ex354::IsField_Narrow() const {
    return false;
}

bool ATresEnemyPawn_e_ex354::IsField_Doughnut() const {
    return false;
}

bool ATresEnemyPawn_e_ex354::IsDuringWalkCooldown() {
    return false;
}

bool ATresEnemyPawn_e_ex354::IsDuringArrowRainCooldown() {
    return false;
}

bool ATresEnemyPawn_e_ex354::IsDamageBodyReactionCoroutineFinished() const {
    return false;
}

bool ATresEnemyPawn_e_ex354::IsCounterAttackWait() const {
    return false;
}

bool ATresEnemyPawn_e_ex354::IsClusterShotMagazine() {
    return false;
}

bool ATresEnemyPawn_e_ex354::IsArrowRainMagazine() {
    return false;
}

void ATresEnemyPawn_e_ex354::DebugSetDispQuickBattleHitCount(int32 inSet) {
}

void ATresEnemyPawn_e_ex354::DebugSetDispFieldChangeTime(int32 inSet) {
}

void ATresEnemyPawn_e_ex354::DebugFinishDoughnutChangeTime() {
}

void ATresEnemyPawn_e_ex354::DebugFinishArtemaChangeTime() {
}

void ATresEnemyPawn_e_ex354::DebugCallFieldChangeRemote(int32 InNum) {
}

bool ATresEnemyPawn_e_ex354::CanUseArrowRain() {
    return false;
}

bool ATresEnemyPawn_e_ex354::CanChangeField_Narrow() const {
    return false;
}

bool ATresEnemyPawn_e_ex354::CanChangeField_Doughnut() const {
    return false;
}

void ATresEnemyPawn_e_ex354::BP_OnReceiveRemoteEvent(FName inEventName) {
}

ATresEnemyPawn_e_ex354::ATresEnemyPawn_e_ex354() {
    this->m_bFlyMode = false;
    this->m_bAura = false;
    this->e_ex313Pawn = NULL;
    this->e_ex316Pawn = NULL;
    this->m_BattleAIPoint = NULL;
    this->m_pro_PartnerDead = false;
    this->m_pro_TestPartnerDead = false;
    this->m_fWarpAppearWaitTime = 0.06f;
    this->m_pro_BattleTime = 30.00f;
    this->m_pro_BattleEndHitPointPer = 90;
    this->m_pro_ArrowRainSkyEffData = NULL;
    this->m_ArrowRainSkyEff = NULL;
    this->m_pArrowRain = NULL;
    this->m_WarpArmLeft = NULL;
    this->m_WarpArmRight = NULL;
    this->m_pro_MagazineNum = 12;
    this->m_pro_ClusterShotMagazine = 6;
    this->m_pro_ArrowRainMagazine = 12;
    this->m_pro_XIIILAManagerClass = NULL;
    this->m_XIIILAManager = NULL;
    this->m_bNoUseLastElementOfQuickBattleCommandStartHitCountArray = true;
    this->m_bCountOnlyStandardFieldQuickBattleCommandStartHitCount = false;
    this->m_bResetQuickBattleCommandStartHitCountOnChangeField = false;
    this->m_iQuickBattleCommandMaxHitIgnoreTime = 0.00f;
    this->m_QuickBattleProjectileClassForSora = NULL;
    this->m_pQuickBattleBGMAsset = NULL;
    this->m_bDebugDispQuickBattleHitCount = false;
    this->m_QuickBattleProjectile = NULL;
    this->m_fFieldChangeMinTime_Doughnut = 90.00f;
    this->m_fFieldChangeMinTime_Narrow = 120.00f;
    this->m_bDebugDispFieldChangeTime = false;
}

