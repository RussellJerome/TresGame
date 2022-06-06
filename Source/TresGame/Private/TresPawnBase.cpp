#include "TresPawnBase.h"
#include "TresRootComponent.h"

class ATresLevelEntity;
class AActor;
class ATresCharPawnBase;
class UObject;
class ATresNpcPawnBase;

bool ATresPawnBase::WarpToTaggedPlayerStart(FName InTag, bool bResetCamera, bool bStateClear) {
    return false;
}

bool ATresPawnBase::WarpToActorLocation(const AActor* inActor, bool bResetCamera) {
    return false;
}

bool ATresPawnBase::UpdateRotateForDegree(FRotator InNewRot, float inDegree) {
    return false;
}

void ATresPawnBase::UpdateRotate(FRotator InNewRot, float InRotRate) {
}

bool ATresPawnBase::TurnToLocation(FVector InLocation, float InRotRate, bool inDegree) {
    return false;
}

bool ATresPawnBase::TurnToActor(const AActor* inActor, float InRotRate, bool inDegree) {
    return false;
}

void ATresPawnBase::SetRootAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale) {
}

void ATresPawnBase::OnWalkingOffLedge_Implementation(const FVector& PreviousFloorImpactNormal, const FVector& PreviousFloorContactNormal, const FVector& PreviousLocation, float TimeDelta) {
}


void ATresPawnBase::MeshUpdateRotate(FRotator InNewRot, float InRotRate) {
}

void ATresPawnBase::MeshResetRotate(float InRotRate) {
}

bool ATresPawnBase::IsPlayingRootMotion() const {
    return false;
}

bool ATresPawnBase::IsEnableLockOn() const {
    return false;
}

float ATresPawnBase::GetTimeSinceSpawn() const {
    return 0.0f;
}

int32 ATresPawnBase::GetTeamNo() const {
    return 0;
}

FVector ATresPawnBase::GetSpawnLocation() const {
    return FVector{};
}

float ATresPawnBase::GetRotYaw() const {
    return 0.0f;
}

FVector ATresPawnBase::GetRootUpVector() const {
    return FVector{};
}

FVector ATresPawnBase::GetRootRightVector() const {
    return FVector{};
}

FVector ATresPawnBase::GetRootFrontVector() const {
    return FVector{};
}

float ATresPawnBase::GetLocationZ() const {
    return 0.0f;
}

UObject* ATresPawnBase::GetLevelEntitySpawner() const {
    return NULL;
}

ATresLevelEntity* ATresPawnBase::GetLevelEntity() const {
    return NULL;
}

FRotator ATresPawnBase::GetDirectionToLocation(FVector InLocation) const {
    return FRotator{};
}

FRotator ATresPawnBase::GetDirectionTo(const AActor* inOtherActor) const {
    return FRotator{};
}

UObject* ATresPawnBase::GetBattleOwner() const {
    return NULL;
}

void ATresPawnBase::CollisionChangePawnHitResponse(bool bIsEnable, FName InGrpName) {
}

void ATresPawnBase::CollisionChangeMapHitResponse(bool bIsEnable) {
}

void ATresPawnBase::CollisionChangeAttackHitResponse(bool bIsEnable, FName InGrpName) {
}

void ATresPawnBase::ClientCheatWalk_Implementation() {
}

void ATresPawnBase::ClientCheatGhost_Implementation() {
}

void ATresPawnBase::ClientCheatFly_Implementation() {
}

void ATresPawnBase::BP_RootPauseUpdateOverlaps(bool bPause, bool bCallManualUpdateOnEndPause) {
}

void ATresPawnBase::BP_ReqFriendWarpHomeAll(bool bAdjustCameraBack) {
}

void ATresPawnBase::BP_NotifyRegisterEnemyGaugeTarget(ATresCharPawnBase* InTarget) {
}

FVector ATresPawnBase::BP_GetSelfMovedVelocity() const {
    return FVector{};
}

FVector ATresPawnBase::BP_GetSelfMovedDelta() const {
    return FVector{};
}

FVector ATresPawnBase::BP_GetRootMotionVelocity() const {
    return FVector{};
}

ETresPlayerUniqueID ATresPawnBase::BP_GetPlayerUniqueID() const {
    return ETresPlayerUniqueID::SORA_KH3;
}

float ATresPawnBase::BP_GetNoActionCounter() const {
    return 0.0f;
}

float ATresPawnBase::BP_GetMovedVelocityZ() const {
    return 0.0f;
}

float ATresPawnBase::BP_GetMovedVelocityXYSize() const {
    return 0.0f;
}

FVector ATresPawnBase::BP_GetMovedVelocity() const {
    return FVector{};
}

ATresNpcPawnBase* ATresPawnBase::BP_GetFriendPawnByUniqueID(ETresChrUniqueID uid) {
    return NULL;
}

ATresNpcPawnBase* ATresPawnBase::BP_GetFriendPawnByIndex(int32 Index) {
    return NULL;
}

ESQEX_AI_ThinkType ATresPawnBase::BP_GetFriendAIThinkType() const {
    return ESQEX_AI_ThinkType::SQEX_AI_THINK_TYPE_NONE;
}

ETresEnemyUniqueID ATresPawnBase::BP_GetEnemyUniqueID() const {
    return ETresEnemyUniqueID::TRES_ENEMY_UID_UNKNOWN;
}

ETresChrUniqueID ATresPawnBase::BP_GetChrUniqueID() const {
    return ETresChrUniqueID::TRES_CHR_UID_UNKNOWN;
}

void ATresPawnBase::AdjustRotate(float InRotRate) {
}

ATresPawnBase::ATresPawnBase() {
    this->MyRoot = CreateDefaultSubobject<UTresRootComponent>(TEXT("TresRoot"));
    this->m_pDataTableSet = NULL;
    this->m_SoundAliasAsset = NULL;
    this->m_pBaseParam = NULL;
    this->m_TeamNo = 255;
    this->m_LevelEntity = NULL;
}

