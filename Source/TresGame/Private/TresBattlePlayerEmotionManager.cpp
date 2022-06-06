#include "TresBattlePlayerEmotionManager.h"

void UTresBattlePlayerEmotionManager::SetUseDynamicRangeToFutureEP(bool InbUse) {
}

void UTresBattlePlayerEmotionManager::SetRangeFutureEP(FTresEmotionPoint InMin, FTresEmotionPoint InMax) {
}

void UTresBattlePlayerEmotionManager::SetEnabledDebugTelemetryLog(bool InbEnabled) {
}

void UTresBattlePlayerEmotionManager::SetEnabledDebugStatusLog(bool InbEnabled) {
}

void UTresBattlePlayerEmotionManager::SetEnabledDebugEPLog(bool InbEnabled) {
}

void UTresBattlePlayerEmotionManager::SetEnabledDebugEmotionMap(bool InbEnabled) {
}

void UTresBattlePlayerEmotionManager::SetEnabledDebugActionLogOnViewport(bool InbEnabled) {
}

void UTresBattlePlayerEmotionManager::SetEnabledDebugActionLogOnOutputLog(bool InbEnabled) {
}

void UTresBattlePlayerEmotionManager::SetBattleType(ETresBPEM_BattleType InBattleType) {
}

void UTresBattlePlayerEmotionManager::RespondToOnStartBossDefeatEffect() {
}

void UTresBattlePlayerEmotionManager::RespondToOnPlayerSpecificAction(TEnumAsByte<ETresPlayerSpecificActionID> InActionID, int32 InSubID) {
}

void UTresBattlePlayerEmotionManager::RespondToOnPlayerEndCommandAction(TEnumAsByte<ETresCommandKind> InCommandKind) {
}

void UTresBattlePlayerEmotionManager::RespondToOnPlayerBeginCommandAction(TEnumAsByte<ETresCommandKind> InCommandKind) {
}

void UTresBattlePlayerEmotionManager::RespondToOnNotificationTakeDamageLogInfo(FTresTakeDamageLogInfo InLog) {
}

void UTresBattlePlayerEmotionManager::RespondToOnNotificationStartAttackLogInfo(FTresStartAttackLogInfo InLog) {
}

void UTresBattlePlayerEmotionManager::RespondToOnNotificationStartAIAttackLogInfo(FTresStateLogInfo InLog) {
}

void UTresBattlePlayerEmotionManager::RespondToOnNotificationRecoveryHpMpFpLogInfo(FTresRecoveryHpMpFpLogInfo InLog) {
}

void UTresBattlePlayerEmotionManager::RespondToOnNotificationDtorStateLogInfo(FTresStateLogInfo InLog) {
}

void UTresBattlePlayerEmotionManager::RespondToOnNotificationCtorStateLogInfo(FTresStateLogInfo InLog) {
}

void UTresBattlePlayerEmotionManager::RespondToOnNotificationAttackHitInvincibleCharLogInfo(FTresAttackHitInvincibleCharLogInfo InLog) {
}

void UTresBattlePlayerEmotionManager::RespondToOnChangeCinematicMode(bool InIsCinematicMode) {
}

void UTresBattlePlayerEmotionManager::RespondToOnChangeBattleMode(bool InIsBattleMode) {
}

void UTresBattlePlayerEmotionManager::OnChangeXIIIPhase(ETresEnemyXIIIPhaseType InNewPhaseType) {
}

bool UTresBattlePlayerEmotionManager::IsEnabledDebugTelemetryLog() const {
    return false;
}

bool UTresBattlePlayerEmotionManager::IsEnabledDebugStatusLog() const {
    return false;
}

bool UTresBattlePlayerEmotionManager::IsEnabledDebugEPLog() const {
    return false;
}

bool UTresBattlePlayerEmotionManager::IsEnabledDebugEmotionMap() const {
    return false;
}

bool UTresBattlePlayerEmotionManager::IsEnabledDebugActionLogOnViewport() const {
    return false;
}

bool UTresBattlePlayerEmotionManager::IsEnabledDebugActionLogOnOutputLog() const {
    return false;
}

FTresEmotionPoint UTresBattlePlayerEmotionManager::GetRangeFutureEP_Min() const {
    return FTresEmotionPoint{};
}

FTresEmotionPoint UTresBattlePlayerEmotionManager::GetRangeFutureEP_Max() const {
    return FTresEmotionPoint{};
}

FTresEmotionPoint UTresBattlePlayerEmotionManager::GetNextEP() const {
    return FTresEmotionPoint{};
}

FTresEmotionPoint UTresBattlePlayerEmotionManager::GetGoalEP() const {
    return FTresEmotionPoint{};
}

FTresEmotionPoint UTresBattlePlayerEmotionManager::GetCurrentEP() const {
    return FTresEmotionPoint{};
}

UTresBattlePlayerEmotionManager::UTresBattlePlayerEmotionManager() {
    this->m_ComboScore_Max_Player = 10.00f;
    this->m_ComboScore_Max_Enemy = 10.00f;
    this->m_ComboScore_PlayerHit_PlayerIncrease = 1.00f;
    this->m_ComboScore_PlayerHit_EnemyDecrease = 1.00f;
    this->m_ComboScore_EnemyHit_EnemyIncrease = 1.00f;
    this->m_ComboScore_EnemyHit_PlayerDecrease = 1.00f;
    this->m_ComboScore_PlayerMiss_PlayerDecrease = 1.00f;
    this->m_ComboScore_EnemyMiss_EnemyDecrease = 1.00f;
    this->m_ComboScore_EnemyGuarded_EnemyDecrease = 1.00f;
    this->m_AttackHitLogLifetime = 0.00f;
    this->m_AttackMissLogLifetime = 0.00f;
    this->m_SpecialActionLogLifeTime = 0.00f;
    this->m_CurrentEPUpdateTimeSpan = 0.00f;
    this->m_NextEPUpdateTimeSpan = 0.00f;
    this->m_GoalEPUpdateTimeSpan = 0.00f;
    this->m_CurrentHope_HitIncreaseBase = 0.00f;
    this->m_CurrentHope_HitIncreaseBase_Magic = 0.00f;
    this->m_CurrentHope_HitIncreaseBase_NoReaction = 0.00f;
    this->m_CurrentHope_kLatestHit = NULL;
    this->m_CurrentHope_kComboScore = NULL;
    this->m_CurrentHope_kDamage = NULL;
    this->m_CurrentHope_DecreaseHitlessTime = NULL;
    this->m_CurrentHope_MissDecreaseBase = 0.00f;
    this->m_CurrentHope_kLatestMiss = NULL;
    this->m_CurrentHope_EnemyHPIncrease = NULL;
    this->m_CurrentFear_HitIncreaseBase = 0.00f;
    this->m_CurrentFear_HitIncreaseBase_NoReaction = 0.00f;
    this->m_CurrentFear_kLatestHit = NULL;
    this->m_CurrentFear_kComboScore = NULL;
    this->m_CurrentFear_kDamage = NULL;
    this->m_CurrentFear_DecreaseHitlessTime = NULL;
    this->m_CurrentFear_MissDecreaseBase = 0.00f;
    this->m_CurrentFear_kLatestMiss = NULL;
    this->m_CurrentFear_GuardedDecreaseBase = 0.00f;
    this->m_CurrentFear_kLatestGuarded = NULL;
    this->m_CurrentFear_DyingTimeIncreaseBase = NULL;
    this->m_CurrentFear_kMPCharging = 0.00f;
    this->m_CurrentFear_kUsableRecoveryItem_Potion = 0.00f;
    this->m_CurrentFear_kUsableRecoveryItem_HiPotion = 0.00f;
    this->m_CurrentFear_kUsableRecoveryItem_MegaPotion = 0.00f;
    this->m_CurrentFear_kUsableRecoveryItem_Ether = 0.00f;
    this->m_CurrentFear_kUsableRecoveryItem_HiEther = 0.00f;
    this->m_CurrentFear_kUsableRecoveryItem_MegaEther = 0.00f;
    this->m_CurrentFear_kUsableRecoveryItem_Elixir = 0.00f;
    this->m_CurrentFear_kUsableRecoveryItem_LastElixir = 0.00f;
    this->m_CurrentFear_kUsableRecoveryItem_FocusSupplement = 0.00f;
    this->m_CurrentFear_kUsableRecoveryItem_HiFocusSupplement = 0.00f;
    this->m_CurrentFear_kUsableRecoveryItem_AllCure = 0.00f;
    this->m_CurrentFear_kUsableRecoveryItem_MognetMedal = 0.00f;
    this->m_GoalEP_kShaking = NULL;
    this->m_NextEP_Speed = 0.10f;
    this->m_ProgressionRate_EnemyHP_XIIIA = NULL;
    this->m_FutureEP_RangeInterpolation_XIIIA = NULL;
    this->m_ProgressionRate_EnemyHP_XIIIB = NULL;
    this->m_FutureEP_RangeInterpolation_XIIIB = NULL;
    this->m_ProgressionRate_EnemyHP_XIIIE = NULL;
    this->m_FutureEP_RangeInterpolation_XIIIE = NULL;
    this->m_DebugEmotionMapWidgetClass = NULL;
}

