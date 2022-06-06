#include "TresGumiShipHUD.h"

class ATresGumiShipBattleVolume;
class ATresGumiShipPlayerControllerBase;
class USceneComponent;

void ATresGumiShipHUD::SetSightEnable(bool bIn) {
}

void ATresGumiShipHUD::OpenMissionClearWindow() {
}

void ATresGumiShipHUD::OpenMessageWindow(const FString& strMessage, bool bAuto) {
}

void ATresGumiShipHUD::OpenInfomationWithLabel(const FString& label) {
}

void ATresGumiShipHUD::OpenInfomation() {
}

void ATresGumiShipHUD::OpenGumiTutorialWindow(ETresGameHelp eOpenId, bool bWithPause) {
}

void ATresGumiShipHUD::OpenCapture() {
}

void ATresGumiShipHUD::DebugWorldGuideAllEnable(bool IsOn) {
}

void ATresGumiShipHUD::DebugHudDrawSuppression(bool IsOn) {
}

void ATresGumiShipHUD::DebugEnemyHPIgnore(bool IsOn) {
}

void ATresGumiShipHUD::DebugEnemyHPEnable(bool IsOn) {
}

void ATresGumiShipHUD::CloseMessageWindow(bool bAll) {
}

void ATresGumiShipHUD::CloseInfomation() {
}

void ATresGumiShipHUD::_OnUpdateInfomation(float DeltaTime) {
}

void ATresGumiShipHUD::_OnStartSpWeapon() {
}

void ATresGumiShipHUD::_OnStartBattleMission() {
}

void ATresGumiShipHUD::_OnResultHudRetry() {
}

void ATresGumiShipHUD::_OnResultHudRankConfirmed() {
}

void ATresGumiShipHUD::_OnResultHudFinish() {
}

void ATresGumiShipHUD::_OnPostSetupPlayer() {
}

void ATresGumiShipHUD::_OnPostCreateSpWeapon() {
}

void ATresGumiShipHUD::_OnOutBattleMode(ATresGumiShipBattleVolume* pBattleVolume) {
}

void ATresGumiShipHUD::_OnInBattleMode(ATresGumiShipBattleVolume* pBattleVolume) {
}

void ATresGumiShipHUD::_OnGetItem(int32 eItemId) {
}

void ATresGumiShipHUD::_OnDefeatedEnemy(const int32 dCount) {
}

void ATresGumiShipHUD::_OnCoolTimeSpWeapon() {
}

void ATresGumiShipHUD::_OnCoolEndSpWeapon() {
}

void ATresGumiShipHUD::_OnCompletedBonus(const FTresGumiShipBonusParameterDataTable& rInfo) {
}

void ATresGumiShipHUD::_OnClosedGameHelp(int32 UserParam) {
}

void ATresGumiShipHUD::_OnChangeTinyShipFormation(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController) {
}

void ATresGumiShipHUD::_OnChangeSpWeaponGauge(const float fOldPoint, const float fNewPoint, const float fRatio) {
}

void ATresGumiShipHUD::_OnChangeSpeedGauge(const float fOldPoint, const float fNewPoint, const float fRatio) {
}

void ATresGumiShipHUD::_OnChangeHpGauge(const int32 dOldHp, const int32 dNewHp, const float fRatio) {
}

void ATresGumiShipHUD::_OnChangedLockonTarget(USceneComponent* pTarget) {
}

void ATresGumiShipHUD::_OnBattleBonus(TEnumAsByte<ETresGumiShipBonusType> eType, int32 dPoint) {
}

ATresGumiShipHUD::ATresGumiShipHUD() {
    this->m_pHud = NULL;
    this->m_pGummiMenu = NULL;
    this->m_pAlbum = NULL;
}

