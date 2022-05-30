#include "TresEnemyPawn_e_ex356.h"

class AController;
class UObject;
class AActor;

void ATresEnemyPawn_e_ex356::OnPlayerTakeDamage(float DamagePoint, AController* InstigatedBy, const FHitResult& HitInfo, const FTresDamageInfo& DamageInfo, FVector ShotFromDirection, AActor* DamageCauser) {
}

void ATresEnemyPawn_e_ex356::OnCtorStateCallBack(TEnumAsByte<ETresStateID> inStateID) {
}

bool ATresEnemyPawn_e_ex356::IsStun() const {
    return false;
}

float ATresEnemyPawn_e_ex356::GetPlayerTimeGaugeRate() const {
    return 0.0f;
}

int32 ATresEnemyPawn_e_ex356::GetPlayerTimeGaugePer() const {
    return 0;
}

float ATresEnemyPawn_e_ex356::GetPlayerTimeGauge() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ex356::GetLuxordTimeGaugeRate() const {
    return 0.0f;
}

int32 ATresEnemyPawn_e_ex356::GetLuxordTimeGaugePer() const {
    return 0;
}

float ATresEnemyPawn_e_ex356::GetLuxordTimeGauge() const {
    return 0.0f;
}

void ATresEnemyPawn_e_ex356::DebugSpawnHideAndSeekCard(int32 Num) {
}

void ATresEnemyPawn_e_ex356::DebugSpawnCard(int32 CardDesignType) {
}

void ATresEnemyPawn_e_ex356::DebugSpawnBigDealProjectile() {
}

void ATresEnemyPawn_e_ex356::DebugSetTimeGaugeRatePlayer(float InRate) {
}

void ATresEnemyPawn_e_ex356::DebugSetTimeGaugeRateLuxord(float InRate) {
}

void ATresEnemyPawn_e_ex356::DebugSetEnableDrawLockonHighPriorityCard(int32 Enable) {
}

void ATresEnemyPawn_e_ex356::DebugSetEnableDrawHideAndSeekShuffleTargetLocation(int32 Enable) {
}

void ATresEnemyPawn_e_ex356::DebugSetEnableCardLockonHighPriorityInRange(int32 Enable) {
}

void ATresEnemyPawn_e_ex356::DebugSetDisableHideAndSeekCardSpawn(int32 Disable) {
}

void ATresEnemyPawn_e_ex356::DebugSetDisableBigDealCardRotation(int32 Disable) {
}

void ATresEnemyPawn_e_ex356::DebugBigDealLuxordCardDestroy() {
}

void ATresEnemyPawn_e_ex356::DebugBigDealFailedEnd() {
}

void ATresEnemyPawn_e_ex356::BigDealRemoteEventForLevelBP(UObject* WorldContextObject, TEnumAsByte<ETresBigDealRemoteEvent_e_ex356::Type> InRemoteType) {
}

void ATresEnemyPawn_e_ex356::BigDealCinematicStartForLevelBP(UObject* WorldContextObject, int32 InRandomSeed, float InOneCardScaleUpTime, float InAllCardScaleUpTime) {
}

ATresEnemyPawn_e_ex356::ATresEnemyPawn_e_ex356() {
    this->m_CardClass = NULL;
    this->m_TargetExplodeProjectileClass = NULL;
    this->m_BigDealProjectileClass = NULL;
    this->m_BigDealEndProjectileClass = NULL;
    this->m_WarpInEffect = NULL;
    this->m_SmokeEffect = NULL;
    this->m_CardWallParticleSystem = NULL;
    this->m_StunDamageEndEnvQuery = NULL;
    this->m_HideAndSeekFieldOutCardEnvQuery = NULL;
    this->m_CardWallSuccessDamageKind = TRES_DMG_KIND_TOSS;
    this->m_CardWallSuccessDamagePowerScale = 1.00f;
    this->m_CardWallSuccessDamageParticleSystem = NULL;
    this->m_BigDealBodyPushPawnClass = NULL;
    this->m_BigDealMapCenterParticleSystem = NULL;
    this->m_BigDealCoefficient = 0.50f;
    this->m_BigDealStartTransitionTime = 0.50f;
    this->m_BigDealEndTransitionTime = 0.50f;
    this->m_BigDealLuxordSideCardAttackParticleSystem = NULL;
    this->m_BigDealLuxordSideCardAttackProjectileClass = NULL;
    this->m_PlayerTimeGaugeDamageGameLevelRate[0] = 1.00f;
    this->m_PlayerTimeGaugeDamageGameLevelRate[1] = 1.00f;
    this->m_PlayerTimeGaugeDamageGameLevelRate[2] = 1.00f;
    this->m_PlayerTimeGaugeDamageGameLevelRate[3] = 1.00f;
    this->m_bTimeGaugeDamageGameLevelRateCeil = true;
    this->m_RevengeTimeGaugeDamage = 0.00f;
    this->m_FirstBigDealFailedTimeGaugeDamage = 1.00f;
    this->m_SecondBigDealFailedTimeGaugeDamage = 1.00f;
    this->m_LastBigDealFailedTimeGaugeDamage = 1.00f;
    this->m_FirstBigDealSuccesTimeGaugeHealValue = 0.00f;
    this->m_SecondBigDealSuccesTimeGaugeHealValue = 0.00f;
    this->m_LastBigDealSuccesTimeGaugeDamage = 0.00f;
}

