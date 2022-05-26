#include "TresLevelScriptActor.h"

class AActor;
class UTresMapSet;
class UObject;
class ATresEnemyPawnBase;
class ATresPawnBase;
class ATresBattleVolume;
class ATresPlayerStart;

void ATresLevelScriptActor::VanishLevelEntities(FName TargetGroup, TEnumAsByte<ETresLevelEntityDisappearMode> DisappearMode, bool SaveProperties) {
}

void ATresLevelScriptActor::UnloadSelf() {
}

void ATresLevelScriptActor::TresSetPauseMenuType(TEnumAsByte<ETresPauseMenuType> Type) {
}

void ATresLevelScriptActor::StartTutorial(UObject* WorldContextObject, FLatentActionInfo LatentInfo, UTresMapSet* MapSet, FName TutorialName) {
}

void ATresLevelScriptActor::SpawnLevelEntities(FName TargetGroup, int32 AppearInfoNo, bool IncrementAppearInfoNo, int32 UserDataNo, bool IncrementUserDataNo, UObject* Spawner, bool DelaySpawning, bool SkipDrawAttractionFlowMarker) {
}

void ATresLevelScriptActor::SetTresPackageShouldBeVisible(UObject* WorldContextObject, FName PackageName, bool Visible, bool bOneFrameExecute) {
}

void ATresLevelScriptActor::SetPreviousPlayableWorldCode(TEnumAsByte<ETresWorldCode> InWorldCode) {
}

void ATresLevelScriptActor::SetLevelEntityUserDataNo(FName TargetGroup, int32 UserDataNo) {
}

void ATresLevelScriptActor::SetLevelEntityAppearInfoNo(FName TargetGroup, int32 AppearInfoNo) {
}

void ATresLevelScriptActor::SetEnableTickEnemyList(FName TargetGroup, bool bEnable, bool bAllComponents) {
}

void ATresLevelScriptActor::SetEnableExistActorForMovie(bool bEnable) {
}

void ATresLevelScriptActor::SetAutoSaveControl(bool Enable, bool StorageAccess) {
}

void ATresLevelScriptActor::ResetLevelEntities(FName TargetGroup) {
}

void ATresLevelScriptActor::ReserveGarbageCollection(float Time) {
}






void ATresLevelScriptActor::RaiseWipeOutEventForGumi(AActor* pTarget, const ETresGumiShipEnemyID eEnemyID) {
}

void ATresLevelScriptActor::RaiseWipeOutEvent(FName GroupName, ATresEnemyPawnBase* Enemy, ATresPawnBase* KilledBy) {
}

void ATresLevelScriptActor::RaiseGenericEvent(FName EventName, UObject* Invoker, UObject* Target, int32 Param) {
}

void ATresLevelScriptActor::PostphoneGarbageCollection(float Time) {
}

void ATresLevelScriptActor::PostEndTutorial() {
}









void ATresLevelScriptActor::LoadAssets(FName AssetTag) {
}

void ATresLevelScriptActor::LinkLevelEntityActorPosition(FName TargetGroup) {
}

AActor* ATresLevelScriptActor::GetEntityActor(FName EntityTag) {
    return NULL;
}

void ATresLevelScriptActor::GetEnemyList(TArray<ATresPawnBase*>& outResult, FName TargetGroup) {
}

void ATresLevelScriptActor::ForceStopBattle(ATresBattleVolume* BattleVolume) {
}

void ATresLevelScriptActor::ForceGarbageCollection(bool bForcePurge) {
}

void ATresLevelScriptActor::EndTutorial(FName EndEventName) {
}

void ATresLevelScriptActor::DiscardRetryPoint() {
}

void ATresLevelScriptActor::CreateRetryPoint(ATresPlayerStart* RetryPoint, bool WhiteFade) {
}

void ATresLevelScriptActor::CreateCheckpoint(AActor* RestartPoint) {
}

void ATresLevelScriptActor::CreateAutoSaveDataEx(const FString& Map, const FString& Tag, TEnumAsByte<ETresWorldCode> WorldCode, FName MapName) {
}

void ATresLevelScriptActor::CreateAutoSaveData(ATresPlayerStart* PlayerStartPosition) {
}

void ATresLevelScriptActor::ClearAssets(FName AssetTag) {
}

void ATresLevelScriptActor::CauseLevelEntityEvent(FName EventName) {
}

ATresLevelScriptActor::ATresLevelScriptActor() {
    this->VisibleExecNum = 0;
    this->VisibleCompleteFrame = 30;
    this->m_LevelVisibleType = ETresLevelVisibility::Default;
}

