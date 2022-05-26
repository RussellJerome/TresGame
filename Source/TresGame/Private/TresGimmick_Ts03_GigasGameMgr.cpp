#include "TresGimmick_Ts03_GigasGameMgr.h"

class USceneComponent;
class UObject;

void ATresGimmick_Ts03_GigasGameMgr::UnregistGimmickHudMarker(USceneComponent* pComp) {
}

void ATresGimmick_Ts03_GigasGameMgr::UnregistAllGimmickHudMarker() {
}

void ATresGimmick_Ts03_GigasGameMgr::ShowReadyStart(ETresUIGigasGameStartSignalType Type) {
}

void ATresGimmick_Ts03_GigasGameMgr::SetTimeRecord(float Time) {
}

void ATresGimmick_Ts03_GigasGameMgr::SetHighScore(int32 Score) {
}

void ATresGimmick_Ts03_GigasGameMgr::RegistGimmickHudMarker(USceneComponent* pComp) {
}

void ATresGimmick_Ts03_GigasGameMgr::OpenTitle(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void ATresGimmick_Ts03_GigasGameMgr::OpenResult(const UObject* WorldContextObject, float ClearMilliSec, int32 totalScore, ETresUIGigasGameResultRank ClearRank, bool bNewRecord, FLatentActionInfo LatentInfo) {
}

void ATresGimmick_Ts03_GigasGameMgr::OnClosedUITitle_Implementation(bool bGameStart) {
}

void ATresGimmick_Ts03_GigasGameMgr::OnClosedUIResult_Implementation() {
}

bool ATresGimmick_Ts03_GigasGameMgr::IsValidDebugRank() const {
    return false;
}

bool ATresGimmick_Ts03_GigasGameMgr::IsDebugContinuousChain() const {
    return false;
}

void ATresGimmick_Ts03_GigasGameMgr::InitializeHud() {
}

void ATresGimmick_Ts03_GigasGameMgr::GetTitleResult(bool& StartGame) {
}

float ATresGimmick_Ts03_GigasGameMgr::GetTimeRecord() const {
    return 0.0f;
}

int32 ATresGimmick_Ts03_GigasGameMgr::GetHighScore() const {
    return 0;
}

ETresUIGigasGameResultRank ATresGimmick_Ts03_GigasGameMgr::GetDebugRank() const {
    return ETresUIGigasGameResultRank::A;
}

void ATresGimmick_Ts03_GigasGameMgr::FinalizeHud() {
}





void ATresGimmick_Ts03_GigasGameMgr::ClearGame_Implementation() {
}

void ATresGimmick_Ts03_GigasGameMgr::AddAward(const FString& LocalizeKey, int32 Score) {
}

ATresGimmick_Ts03_GigasGameMgr::ATresGimmick_Ts03_GigasGameMgr() {
}

