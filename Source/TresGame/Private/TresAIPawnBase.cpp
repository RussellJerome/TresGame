#include "TresAIPawnBase.h"
#include "MercunaObstacleComponent.h"

class UTresLocomotionDefinitionBase;

void ATresAIPawnBase::SetRage(float inValue) {
}

void ATresAIPawnBase::SetAttackGroup(FGameplayTag inValue) {
}

void ATresAIPawnBase::OnMove3DCompleted(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result) {
}

void ATresAIPawnBase::OnDtorStateEvent(TEnumAsByte<ETresStateID> inStateID) {
}

void ATresAIPawnBase::OnCtorStateEvent(TEnumAsByte<ETresStateID> inStateID) {
}

bool ATresAIPawnBase::IsSwimWaterSurface() const {
    return false;
}

bool ATresAIPawnBase::IsSwimUnderWater() const {
    return false;
}

bool ATresAIPawnBase::IsSwimming() const {
    return false;
}

bool ATresAIPawnBase::IsPlayFieldVoice() {
    return false;
}

bool ATresAIPawnBase::IsNavigationBuildInProgress() const {
    return false;
}

bool ATresAIPawnBase::IsHostileTarget() const {
    return false;
}

bool ATresAIPawnBase::IsDamageReaction() const {
    return false;
}

float ATresAIPawnBase::GetWorldTime() const {
    return 0.0f;
}

float ATresAIPawnBase::GetTimeSinceAIStarted() const {
    return 0.0f;
}

float ATresAIPawnBase::GetTimeNotDamaged() const {
    return 0.0f;
}

float ATresAIPawnBase::GetTimeMoving() {
    return 0.0f;
}

float ATresAIPawnBase::GetTimeMotionless() {
    return 0.0f;
}

UTresLocomotionDefinitionBase* ATresAIPawnBase::GetStateToLocomotionDefinition() const {
    return NULL;
}

float ATresAIPawnBase::GetSpeedFromVelocity() const {
    return 0.0f;
}

float ATresAIPawnBase::GetRage() const {
    return 0.0f;
}

int32 ATresAIPawnBase::GetPositionalRankingNotDuplicate() const {
    return 0;
}

int32 ATresAIPawnBase::GetPositionalRanking() const {
    return 0;
}

float ATresAIPawnBase::GetLastAttackStartedTimestamp() const {
    return 0.0f;
}

float ATresAIPawnBase::GetLastAttackedTimestamp() const {
    return 0.0f;
}

float ATresAIPawnBase::GetElapsedTimeSinceLastDamaged() const {
    return 0.0f;
}

float ATresAIPawnBase::GetElapsedTimeSinceLastAttackStateStart() const {
    return 0.0f;
}

float ATresAIPawnBase::GetElapsedTimeSinceLastAttackStart() const {
    return 0.0f;
}

float ATresAIPawnBase::GetElapsedTimeSinceLastAttack() const {
    return 0.0f;
}

float ATresAIPawnBase::GetCurrentDuration() const {
    return 0.0f;
}

float ATresAIPawnBase::GetBattleTime() const {
    return 0.0f;
}

FGameplayTag ATresAIPawnBase::GetAttackGroup() const {
    return FGameplayTag{};
}

float ATresAIPawnBase::GetAttackCooldownRemaining() const {
    return 0.0f;
}

float ATresAIPawnBase::GetAttackCooldown() const {
    return 0.0f;
}

float ATresAIPawnBase::GetAIRunningTime() const {
    return 0.0f;
}

bool ATresAIPawnBase::DebugAISwimming(FVector Dirc, float Power, float Speed) {
    return false;
}

bool ATresAIPawnBase::DebugAIMove(FVector Dirc, float Power) {
    return false;
}

bool ATresAIPawnBase::DebugAIJump(float JumpPower) {
    return false;
}


ATresAIPawnBase::ATresAIPawnBase() {
    this->MyAIBehavior = NULL;
    this->m_DefaultAttackDefinition = NULL;
    this->m_DefaultLocomotionDefinition = NULL;
    this->m_BaseAttackCooldown = 3.00f;
    this->m_AttackCooldownRandomDeviation = 0.50f;
    this->m_HateAmount = 0.40f;
    this->m_HateRandomDeviation = 0.00f;
    this->m_RageAmount = 0.40f;
    this->m_RageRandomDeviation = 0.00f;
    this->bDebugDisplay = false;
    this->m_Reincarnation = false;
    this->m_bBPEM_IgnoreStatus = false;
    this->m_LocomotionDefinition = NULL;
    this->m_AIBodyCollisionRadius = 0.00f;
    this->m_MaxShieldHp = 0;
    this->m_TurnLimitPitch = 89.00f;
    this->m_FixedPointTurnSpeed = 360.00f;
    this->m_bUseIdleMaxRotationSpeed = true;
    this->m_IdleMaxRotationSpeed = 180.00f;
    this->m_bUseFixedTurnMaxRotationSpeed = false;
    this->m_FixedTurnMaxRotationSpeed = 180.00f;
    this->m_Navigation3DComponent = NULL;
    this->m_bManualEditingObstacleComponent = false;
    this->ObstacleComponent = CreateDefaultSubobject<UMercunaObstacleComponent>(TEXT("MercunaObstacleComponent"));
}

