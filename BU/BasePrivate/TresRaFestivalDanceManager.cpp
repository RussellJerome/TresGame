#include "TresRaFestivalDanceManager.h"
#include "TresRaFestivalDanceSplineComponent.h"

class UTresTimerTask;
class UObject;
class UTresPlayerState_FestivalDance;
class ATresRaSpecialPerformActor;

void ATresRaFestivalDanceManager::UpdateResult(int32 totalScore, int32 nGauge, int32 nGaugeMax) {
}

void ATresRaFestivalDanceManager::StartSpecialMove(TArray<FSpecialMoveMissionParam> MissionList, bool InOrder, float TotalTime) {
}

void ATresRaFestivalDanceManager::SetWaveClear(int32 waveIndex) {
}

void ATresRaFestivalDanceManager::SetTimingBasePerformEnable(bool InEnable) {
}

void ATresRaFestivalDanceManager::SetSpecialPerformReady(EDanceSpecialPerformType InPerformType) {
}

void ATresRaFestivalDanceManager::SetSpecialPerformEnd() {
}

void ATresRaFestivalDanceManager::SetRapunzelMissionIndex(int32 Index) {
}

void ATresRaFestivalDanceManager::SetRapunzelDanceStart() {
}

void ATresRaFestivalDanceManager::SetRapunzelDanceReady() {
}

void ATresRaFestivalDanceManager::SetRapunzelDanceFinishReady() {
}

void ATresRaFestivalDanceManager::SetRapunzelDanceEnd(bool bCommandFinish) {
}

void ATresRaFestivalDanceManager::SetPairDanceSpeed(float Speed) {
}

void ATresRaFestivalDanceManager::SetPairDanceRotateSpeed(float RotateSpeed) {
}

void ATresRaFestivalDanceManager::SetPairDanceFourBeatCount(int32 InCount) {
}

void ATresRaFestivalDanceManager::SetNpcActionSetIndex(int32 Index) {
}

void ATresRaFestivalDanceManager::SetHudLeftScore(int32 nScore) {
}

void ATresRaFestivalDanceManager::SetHudDanceNotifyFinish() {
}

void ATresRaFestivalDanceManager::SetHudDanceGauge(int32 nGauge, int32 nGaugeMax) {
}

void ATresRaFestivalDanceManager::SetHudDanceCountDown(int32 count) {
}

void ATresRaFestivalDanceManager::SetHudDanceAddedTime(float fTime) {
}

void ATresRaFestivalDanceManager::SetExtraValidTime(float Time) {
}

void ATresRaFestivalDanceManager::SetExtraPerformCountMax(int32 InCountMax) {
}

void ATresRaFestivalDanceManager::SetDanceSuspend() {
}

void ATresRaFestivalDanceManager::SetDanceStart(bool bRevisit, int32 nScoreRecord, int32 nChainRecord, int32 nStartWave) {
}

void ATresRaFestivalDanceManager::SetDanceResume() {
}

void ATresRaFestivalDanceManager::SetDanceResultMode(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void ATresRaFestivalDanceManager::SetDancePlayerStart() {
}

void ATresRaFestivalDanceManager::SetDanceEnd() {
}

void ATresRaFestivalDanceManager::ResetSpecialMove(bool IsTimeReset) {
}

void ATresRaFestivalDanceManager::ResetPairDanceSpeed() {
}

void ATresRaFestivalDanceManager::ResetPairDanceRotateSpeed() {
}



















void ATresRaFestivalDanceManager::OpenRevisitTimerCountDown(UTresTimerTask* pTask, float fStartTime, float fWarningTime, float fAlertTime) {
}

void ATresRaFestivalDanceManager::OpenHudDanceResult(UObject* WorldContextObject, int32 nScore, int32 nChain, ETresUIHudDanceResult rankKind, FLatentActionInfo LatentInfo) {
}

void ATresRaFestivalDanceManager::OnSpecialPerformStart(FName ActorName, ATresRaSpecialPerformActor* pActor) {
}

void ATresRaFestivalDanceManager::OnSpecialPerformEnd(FName ActorName, ATresRaSpecialPerformActor* pActor) {
}

void ATresRaFestivalDanceManager::OnPlayerPerformEnd(UTresPlayerState_FestivalDance* InPlayerState) {
}

void ATresRaFestivalDanceManager::OnPlayerButtonInput(UTresPlayerState_FestivalDance* InPlayerState, EDancePerformType perform, int32 performLv) {
}

int32 ATresRaFestivalDanceManager::GetPairDanceFourBeatCount() const {
    return 0;
}

int32 ATresRaFestivalDanceManager::GetHighestChainCount() const {
    return 0;
}

int32 ATresRaFestivalDanceManager::GetExtraPerformCountMax() const {
    return 0;
}

int32 ATresRaFestivalDanceManager::GetCurrentChainCount() const {
    return 0;
}

void ATresRaFestivalDanceManager::EndSpecialMove() {
}

void ATresRaFestivalDanceManager::CloseHudDanceResult() {
}

void ATresRaFestivalDanceManager::ActivateStandByNpc(int32 InGroupID) {
}

ATresRaFestivalDanceManager::ATresRaFestivalDanceManager() {
    this->PlayerSpeed = 500.00f;
    this->PlayerRotateSpeed = 10.00f;
    this->Idle_MotionName = TEXT("ODanceMove");
    this->IdleLoop_FourBeatCount = 4;
    this->TargetAreaRadius = 0.00f;
    this->SafeDistanceFromWall = 60.00f;
    this->PairDance_Speed = 0.00f;
    this->PairDance_SpeedInChange = 0.00f;
    this->PairDance_RotateSpeed = 0.00f;
    this->PairDance_ChangeTime = 0.00f;
    this->PairDance_ExtraPerformCountMax = 0;
    this->PairDanceFourBeatCount = 0;
    this->ExtraValidTime = 0.00f;
    this->ScoreMax = 999999;
    this->ChainCountMax = 999;
    this->DanceUIBP = NULL;
    this->PairDancePawnBP = NULL;
    this->SpecialMoveUIBP = NULL;
    this->SpecialMove_OrderReverse = false;
    this->SpecialMoveUI_IconInterval = 0.00f;
    this->InputAcceptInterval = 0;
    this->InputAcceptRange = 0.00f;
    this->Flag_UseTimingBasePerform = false;
    this->InputAcceptRangeLv1 = 0.00f;
    this->InputAcceptRangeLv2 = 0.00f;
    this->InputAcceptRangeLv3 = 0.00f;
    this->EffectDataAsset = NULL;
    this->TargetMarkerEffectGroupID = 0;
    this->PairDanceEffectGroupID = 0;
    this->EffectMPC = NULL;
    this->CameraDistance_Normal = 0.00f;
    this->CameraDistance_Pair = 0.00f;
    this->CameraPitchMax = 15.00f;
    this->CameraPitchMin = -70.00f;
    this->CameraDistance_LerpTime = 0.00f;
    this->Camera_ValidActionLevel = 0;
    this->CameraTargetChangeFlag_Male = false;
    this->CameraTargetChangeFlag_Female = false;
    this->RapunzelDanceStartNum = 0;
    this->RapunzelDanceMaxNum = 0;
    this->RapunzelDanceMaxNumFirstTime = 0;
    this->RapunzelDanceAddNpcInterval = 0;
    this->RapunzelDanceTotalTime = 0.00f;
    this->RapunzelDanceMoveSpeed = 0.00f;
    this->RapunzelDanceSuccessEffectGroupID = 0;
    this->FlynnSplineStayTime = 0.00f;
    this->RapunzelMarkerTotalBeatCount = 0;
    this->RapunzelMarkerUpdateStartCount = 0;
    this->RapunzelMarkerSize = 70.00f;
    this->RapunzelMarkerScale = 1.00f;
    this->RapunzelCameraDistance = 0.00f;
    this->RapunzelCameraPitchMax = 0.00f;
    this->RapunzelCameraPitchMin = 0.00f;
    this->RapunzelCameraPitchStart = 0.00f;
    this->RapunzelCameraRotSpeed = 0.00f;
    this->TensionUpDistance_PerformNormal = 0.00f;
    this->TensionUpDistance_PerformGreat = 0.00f;
    this->TensionUpEffectGroupID = 0;
    this->NpcPauseCheckRange = 0.00f;
    this->NpcPauseDistance = 0.00f;
    this->NpcPauseTime = 0.00f;
    this->NpcTakeDistanceTime = 0.00f;
    this->ClapSpotSize = 0;
    this->ClapSpotCount = 0;
    this->ClapSpotMinInterval = 0.00f;
    this->ClapSpotShowTimeInterval = 0.00f;
    this->ClapSpotOffsetSize = 0.00f;
    this->TestEffect_ClapSpotEffect = NULL;
    this->ClapSpotEffectScale = 1.00f;
    this->ClapSuccessEffectGroupID = 0;
    this->SE_Success = NULL;
    this->SE_ChangeSuccess = NULL;
    this->SE_OutIn = NULL;
    this->SE_Failed = NULL;
    this->RapunzelDanceSE_Success = NULL;
    this->RapunzelDanceSE_Failed = NULL;
    this->RapunzelDanceSE_Start = NULL;
    this->RapunzelDanceSE_Finish = NULL;
    this->ClapSE_Normal = NULL;
    this->ClapSE_Spot = NULL;
    this->SE_NpcReaction = NULL;
    this->SE_Count = NULL;
    this->SE_CountStart = NULL;
    this->SE_Finish = NULL;
    this->BgmSection_Wave1 = 0;
    this->BgmSection_Center1 = 0;
    this->BgmSection_Event1 = 0;
    this->BgmSection_Wave2 = 0;
    this->BgmSection_Center2 = 0;
    this->BgmSection_Event2 = 0;
    this->BgmSection_RevisitResult = 0;
    this->BgmEventSection_ChangeCount = 0;
    this->DebugFlag_UseCustomRate = false;
    this->DebugFlag_DebugDraw = false;
    this->DebugFlag_DebugDrawSpline = false;
    this->Debug_CustomRate = 0.00f;
    this->Debug_CollisionAdjustDistance = 0.00f;
    this->MySplineMover = CreateDefaultSubobject<UTresRaFestivalDanceSplineComponent>(TEXT("FestivalDanceSplineComponent0"));
    this->m_pRapunzel = NULL;
    this->m_pFlynn = NULL;
    this->m_DanceUI = NULL;
    this->m_SpecialMoveUI = NULL;
}

