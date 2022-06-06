#include "TresGimmickActor.h"

class UObject;
class UMeshComponent;
class AActor;

void ATresGimmickActor::SetPowerSavingMode(bool mode, UObject* who) {
}

void ATresGimmickActor::RequestStopGimmickForPlan(bool PlayAnimation) {
}

void ATresGimmickActor::RequestStartGimmickForPlan(bool PlayAnimation) {
}

void ATresGimmickActor::RequestShowGimmickForPlan() {
}

void ATresGimmickActor::RequestResetGimmickForPlan() {
}

void ATresGimmickActor::RequestHideGimmickForPlan() {
}

void ATresGimmickActor::RequestForceStopedGimmickForPlan() {
}

void ATresGimmickActor::RequestForceStartedGimmickForPlan() {
}

void ATresGimmickActor::RequestForceDestroyedGimmickForPlan() {
}

void ATresGimmickActor::RequestEnableCollisionGimmickForPlan() {
}

void ATresGimmickActor::RequestDisableCollisionGimmickForPlan() {
}

void ATresGimmickActor::RequestDestroyGimmickForPlan(bool PlayAnimation) {
}








void ATresGimmickActor::OnChangeGimmickPauseCallBack(bool bPause) {
}

void ATresGimmickActor::NotifyChangeGimmickActionImpl(bool bShow) {
}

bool ATresGimmickActor::IsPowerSavingMode() {
    return false;
}

UMeshComponent* ATresGimmickActor::GetMeshComponentForPlan() {
    return NULL;
}















void ATresGimmickActor::BP_SetTeamNo(int32 InTeamNo) {
}

void ATresGimmickActor::BP_SetEnableFocusPointForPlan(bool Enable) {
}


bool ATresGimmickActor::BP_IsStartGimmickForPlan() const {
    return false;
}

bool ATresGimmickActor::BP_IsShowedGimmickForPlan() const {
    return false;
}

bool ATresGimmickActor::BP_IsGimmickActive() const {
    return false;
}

bool ATresGimmickActor::BP_IsEnabledCollisionGimmickForPlan() const {
    return false;
}

bool ATresGimmickActor::BP_IsDestroyedGimmickForPlan() const {
    return false;
}

void ATresGimmickActor::BP_IgnoreActorWhenMovingAll(AActor* Actor, bool bShouldIgnore) {
}

int32 ATresGimmickActor::BP_GetTeamNo() const {
    return 0;
}

void ATresGimmickActor::BP_GetFoodstuffPrizeToTeam() {
}

FName ATresGimmickActor::BP_GetFoodstuffDropDataKeyName() const {
    return NAME_None;
}

void ATresGimmickActor::BP_EnableGimmickAttackCollision(const FName InGroupName, float InAttackInterval) {
}


void ATresGimmickActor::BP_DisableGimmickAttackCollision(const FName InGroupName) {
}

void ATresGimmickActor::BP_DeactivateGimmickComponentAll() {
}

void ATresGimmickActor::BP_DeactivateGimmick() {
}

void ATresGimmickActor::BP_ActivateGimmickComponentAll() {
}

void ATresGimmickActor::BP_ActivateGimmick() {
}

ATresGimmickActor::ATresGimmickActor() {
    this->m_bAutoActivate = true;
    this->m_bGimmickComponentAutoLinkActivate = true;
    this->m_bIsActive = true;
    this->m_bChangeAtkCollisionChannelWhenHidden = false;
    this->m_bUseBlueprintEventByChangeAtkCollisionChannel = false;
    this->m_pDataTableSet = NULL;
    this->m_BaseParam = NULL;
    this->m_FakeEnemyUniqueID = ETresEnemyUniqueID::TRES_ENEMY_UID_UNKNOWN;
    this->m_TeamNo = 255;
    this->m_UseChangeGimmickActionNotify = false;
    this->m_bEnableGimmickControl = false;
    this->m_bAutoStartGimmick = true;
    this->m_bAutoStartShowGimmick = false;
    this->m_bDefaultShowGimmick = true;
    this->m_bWithoutMyMeshShowGimmick = false;
    this->m_bAutoStartEnableCollisionGimmick = false;
    this->m_bDefaultEnableCollisionGimmick = true;
    this->m_bWithoutMyMeshCollisionGimmick = false;
    this->m_DefaultCollisionGimmickProfile = TEXT("TresGimmick");
    this->m_bAutoDestoryGimmick = false;
    this->m_AutoDestoryDelayTime = 0.00f;
    this->m_bAutoDestoryHideGimmick = false;
    this->m_AutoDestoryHideDelayTime = 0.00f;
    this->m_bAutoDestoryDisableCollisionGimmick = false;
    this->m_bEnableDestroyedReaction = false;
    this->m_bEnableDestroyedReflection = false;
    this->m_bAutoStartActiveGimmick = true;
    this->m_bBeginPlayDisableTickRegister = false;
    this->m_bUseGimmickPause = false;
    this->m_bUseGimmickPauseDisableTick = true;
    this->m_bUseGimmickInstanceManage = false;
    this->m_bAttackGimmick = false;
    this->m_Effect_GimmickDestroy = NULL;
}

