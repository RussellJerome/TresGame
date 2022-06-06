#include "TresGumiShipEnemyBattleStarter.h"

class ATresGumiShipActualRailSlideArrangement;
class ATresGumiShipWorldSymbolActor;
class UPrimitiveComponent;
class AActor;
class UObject;

bool ATresGumiShipEnemyBattleStarter::IsEnabled() const {
    return false;
}

ATresGumiShipActualRailSlideArrangement* ATresGumiShipEnemyBattleStarter::GetRailShootingRouteSpline() const {
    return NULL;
}

void ATresGumiShipEnemyBattleStarter::Enable() {
}

void ATresGumiShipEnemyBattleStarter::Disable() {
}

void ATresGumiShipEnemyBattleStarter::_SpawnHiddenSettingBossEnemy(bool bHiddenBoss) {
}

void ATresGumiShipEnemyBattleStarter::_SetRevengeMatchBossFlag(bool bIsRevengeMatchBoss) {
}

bool ATresGumiShipEnemyBattleStarter::_SetLockWorldSymbolActorByBoss(ATresGumiShipWorldSymbolActor* LockTargetWorldSymbol) {
    return false;
}

void ATresGumiShipEnemyBattleStarter::_OnRailShootingBattleResultRankConfirmed(const TEnumAsByte<ETresGumiShipBattleMissionRankType> eRank) {
}

void ATresGumiShipEnemyBattleStarter::_OnRailShootingBattleResultEnter() {
}

void ATresGumiShipEnemyBattleStarter::_OnRailShootingBattleMissionClear(const ETresGumiShipBattleMissionEndFactorType eEndType) {
}

void ATresGumiShipEnemyBattleStarter::_OnRailShootingBattleFinalize(const ETresGumiShipBattleMissionEndFactorType eEndType) {
}

void ATresGumiShipEnemyBattleStarter::_OnLeaveFieldBattleTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void ATresGumiShipEnemyBattleStarter::_OnLeaveBattleStartTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void ATresGumiShipEnemyBattleStarter::_OnEnterFieldBattleTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ATresGumiShipEnemyBattleStarter::_OnEnterEnemyDisappearTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ATresGumiShipEnemyBattleStarter::_OnEnterBattleStartTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ATresGumiShipEnemyBattleStarter::_OnEnemyGroupWipeOut(const FTresGumiShipEnemyGroupWipeOutData& rEnemyGroupWipeOutData) {
}

bool ATresGumiShipEnemyBattleStarter::_HideCurrentBattleArenaMeshActor(const UObject* WorldContextObject, bool bHide) {
    return false;
}

ATresGumiShipEnemyBattleStarter::ATresGumiShipEnemyBattleStarter() {
    this->m_eBattleStartType = ETresGumiShipEnemyBattleStartType::ENEMY_SYMBOL_ENCOUNTER;
    this->m_eEnemyTerritoryID = ETresGumiShipEnemyTerritoryID::E_GM01_TE_01;
    this->m_pBoundEnemyTerritoryPoint = NULL;
    this->m_pBattleArenaMeshActor = NULL;
    this->m_bDisableStart = false;
    this->m_pFieldBattleTriggerVolume = NULL;
    this->m_fBossEnemyAppearEventFadeOutTime = 0.00f;
    this->m_bIsHideBossEnemyOnFieldEncounter = true;
    this->m_pRevengeMatchBossBattleStartTrigger = NULL;
    this->m_pRailShootingRouteSpline = NULL;
    this->m_pRailShootingBattleStartTrigger = NULL;
    this->m_pRailShootingBattleStarterGenerator = NULL;
    this->m_pEnemyDisappearTriggerAtSplineEnd = NULL;
    this->m_bHideGuideMarkerFirstBattle = false;
    this->m_bForbiddenRetryFirstClear = false;
}

