#include "TresGumiShipEnemyPawnBase.h"

class AActor;
class ATresGumiShipEnemyPartsBase;
class UTresGumiShipEnemyStateController;
class ATresGumiShipEnemyGenerator;
class ATresGumiShipPlayerPawnBase;
class ATresGumiShipEnemyBattleStarter;
class UTresGumiShipEnemyGroupManager;
class UTresGumiShipBattleDataTableSet;

void ATresGumiShipEnemyPawnBase::TurnToTarget(const AActor* TargetActor, float LimitTurnDegrees, bool ApplyImmediately) {
}

void ATresGumiShipEnemyPawnBase::TurnToLocation(const FVector& TargetLocation, float LimitTurnDegrees, bool ApplyImmediately) {
}

void ATresGumiShipEnemyPawnBase::TurnToDesiredRotation(const FQuat& DesiredRotation, float LimitTurnDegrees, bool ApplyImmediately) {
}

void ATresGumiShipEnemyPawnBase::StartAttackPermissionCheck() {
}

void ATresGumiShipEnemyPawnBase::SetPitchLimitAngle(float PitchLimit) {
}

void ATresGumiShipEnemyPawnBase::SetMaxRotateSpeed(float MaxRotateSpeed) {
}

void ATresGumiShipEnemyPawnBase::SetLockOnPermissionAll(bool LockOnEnable, bool PropagateToAttachedParts) {
}

void ATresGumiShipEnemyPawnBase::SetEnemyLookAtType(ETresGumiShipEnemyLookAtType LookAtType) {
}

void ATresGumiShipEnemyPawnBase::SetEnemyLookAtOffset(FVector CameraBaseLookAtOffset) {
}

void ATresGumiShipEnemyPawnBase::SetAttachEffectsVisibility(bool Visibility, bool PropagateToAttachedParts) {
}

void ATresGumiShipEnemyPawnBase::SetAllMeshVisibility(bool Visibility, bool PropagateToAttachedParts) {
}

void ATresGumiShipEnemyPawnBase::SetAllMeshFadeRate(float FadeRate, bool PropagateToAttachedParts) {
}

bool ATresGumiShipEnemyPawnBase::IsLockOnPermissionOK() const {
    return false;
}

bool ATresGumiShipEnemyPawnBase::IsExistEnemyParts(FName PartsName) const {
    return false;
}

bool ATresGumiShipEnemyPawnBase::IsDeadOrDisappear() const {
    return false;
}

bool ATresGumiShipEnemyPawnBase::IsCrowdEnemy() const {
    return false;
}

bool ATresGumiShipEnemyPawnBase::IsBossEnemy() const {
    return false;
}

bool ATresGumiShipEnemyPawnBase::IsAttackPermissionOK() const {
    return false;
}

bool ATresGumiShipEnemyPawnBase::IsAttachedEnemyParts(ATresGumiShipEnemyPartsBase* pEnemyParts) const {
    return false;
}

void ATresGumiShipEnemyPawnBase::HideEnemyPawn(bool HiddenEnable, bool PropagateToAttachedParts) {
}

ETresGumiShipEnemyStateResult ATresGumiShipEnemyPawnBase::GetStateResult() const {
    return ETresGumiShipEnemyStateResult::RESULT_SUCCESS;
}

FName ATresGumiShipEnemyPawnBase::GetStateName(ETresGumiShipEnemyStateID StateID) const {
    return NAME_None;
}

UTresGumiShipEnemyStateController* ATresGumiShipEnemyPawnBase::GetStateController() const {
    return NULL;
}

ATresGumiShipEnemyGenerator* ATresGumiShipEnemyPawnBase::GetSpawnOwnerGenerator() const {
    return NULL;
}

int32 ATresGumiShipEnemyPawnBase::GetScorePoint() const {
    return 0;
}

float ATresGumiShipEnemyPawnBase::GetPitchLimitAngle() const {
    return 0.0f;
}

float ATresGumiShipEnemyPawnBase::GetMaxRotateSpeed() const {
    return 0.0f;
}

ETresGumiShipEnemyStateID ATresGumiShipEnemyPawnBase::GetLastStateID() const {
    return ETresGumiShipEnemyStateID::BLANK_STATE;
}

ATresGumiShipPlayerPawnBase* ATresGumiShipEnemyPawnBase::GetGumiShipPlayerPawn() const {
    return NULL;
}

int32 ATresGumiShipEnemyPawnBase::GetEnemyUnitID() const {
    return 0;
}

FVector2D ATresGumiShipEnemyPawnBase::GetEnemySymbolOffset() const {
    return FVector2D{};
}

FName ATresGumiShipEnemyPawnBase::GetEnemyNameID() const {
    return NAME_None;
}

ETresGumiShipEnemyLookAtType ATresGumiShipEnemyPawnBase::GetEnemyLookAtType() const {
    return ETresGumiShipEnemyLookAtType::KEEP_SPLINE_MOVE_DIRECTION;
}

FVector ATresGumiShipEnemyPawnBase::GetEnemyLookAtOffset() const {
    return FVector{};
}

ETresGumiShipEnemyID ATresGumiShipEnemyPawnBase::GetEnemyID() const {
    return ETresGumiShipEnemyID::ENEMY_ID_NONE;
}

FGuid ATresGumiShipEnemyPawnBase::GetEnemyGUID() const {
    return FGuid{};
}

float ATresGumiShipEnemyPawnBase::GetEnemyBoundsRadius() const {
    return 0.0f;
}

FRotator ATresGumiShipEnemyPawnBase::GetDirectActorRotator() const {
    return FRotator{};
}

FVector ATresGumiShipEnemyPawnBase::GetDirectActorLocation() const {
    return FVector{};
}

FName ATresGumiShipEnemyPawnBase::GetCurrentStateName() const {
    return NAME_None;
}

ETresGumiShipEnemyStateID ATresGumiShipEnemyPawnBase::GetCurrentStateID() const {
    return ETresGumiShipEnemyStateID::BLANK_STATE;
}

ATresGumiShipEnemyBattleStarter* ATresGumiShipEnemyPawnBase::GetCurrentEnemyBattleStarter() const {
    return NULL;
}

UTresGumiShipBattleDataTableSet* ATresGumiShipEnemyPawnBase::GetBattleDataTableSet() const {
    return NULL;
}

int32 ATresGumiShipEnemyPawnBase::GetAttackPriority() const {
    return 0;
}

ATresGumiShipEnemyPartsBase* ATresGumiShipEnemyPawnBase::GetAttachedEnemyParts(FName PartsName) const {
    return NULL;
}

UTresGumiShipEnemyGroupManager* ATresGumiShipEnemyPawnBase::GetAssignedEnemyGroupManager() const {
    return NULL;
}

void ATresGumiShipEnemyPawnBase::_StartAttackCoolDownTimer(FName AttackName) {
}

void ATresGumiShipEnemyPawnBase::_SetUsableAttackEnable(FName AttackName, bool bEnable) {
}

bool ATresGumiShipEnemyPawnBase::_ReturnAttackPermission() {
    return false;
}

bool ATresGumiShipEnemyPawnBase::_RequestAttackPermission() {
    return false;
}

void ATresGumiShipEnemyPawnBase::_DeleteAttackMethodEntry(FName AttackName) {
}

bool ATresGumiShipEnemyPawnBase::_CreanupAttackPermission() {
    return false;
}

void ATresGumiShipEnemyPawnBase::_ChangeState(ETresGumiShipEnemyStateID StateID) {
}

bool ATresGumiShipEnemyPawnBase::_CancelAttackPermissionRequest() {
    return false;
}

ATresGumiShipEnemyPawnBase::ATresGumiShipEnemyPawnBase() {
    this->m_EnemyNameID = TEXT("e_gmXXX_0");
    this->m_fEnemyBoundsRadius = 0.00f;
    this->m_pBattleDataTableSet = NULL;
    this->m_pEffectAttachDataAsset = NULL;
    this->m_nDeadEffectAttachGroupID = 3510;
    this->m_nUniqueDeadEffectAttachGroupID = 3530;
    this->m_bEncountSymbolWithAnimation = false;
    this->m_EncountSymbolStateMotionName = TEXT("M_010");
    this->m_UseStateControllerClass = NULL;
}

