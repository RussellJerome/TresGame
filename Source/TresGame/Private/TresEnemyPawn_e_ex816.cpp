#include "TresEnemyPawn_e_ex816.h"

void ATresEnemyPawn_e_ex816::SetPhysicsBodyBlendRate(float InRate, float InterpTime) {
}

void ATresEnemyPawn_e_ex816::ResetPhysicsBodyBlendRate(float InterpTime) {
}

void ATresEnemyPawn_e_ex816::OnPlayerSpecificAction(TEnumAsByte<ETresPlayerSpecificActionID> InActionID, int32 InSubID) {
}

bool ATresEnemyPawn_e_ex816::IsDowned() const {
    return false;
}

FRotator ATresEnemyPawn_e_ex816::GetLookAtBoneRot(TEnumAsByte<ETresEnemyEyeType_e_ex816> InEyeType) const {
    return FRotator{};
}

void ATresEnemyPawn_e_ex816::DebugSetPhysicsBodyBlendRate(float InRate) {
}

void ATresEnemyPawn_e_ex816::DebugSetDownState() {
}

void ATresEnemyPawn_e_ex816::DebugSetBonePhysicsBlendRate(int32 InIndex) {
}

void ATresEnemyPawn_e_ex816::DebugResetPhysicsBodyBlendRate() {
}

void ATresEnemyPawn_e_ex816::DebugResetBonePhysicsBlendRate() {
}

void ATresEnemyPawn_e_ex816::DebugEndDownState() {
}

ATresEnemyPawn_e_ex816::ATresEnemyPawn_e_ex816() {
    this->m_DownActionClass = NULL;
    this->m_OverrideNavAgentHeight = 0.00f;
    this->m_SpawnPointAvoidRadius = 0.00f;
    this->m_DefaultPhysicsBlendRate = 0.00f;
    this->m_DownPhysicsBlendRate = 0.00f;
    this->m_SlowPhysicsRate = 1.00f;
    this->m_bEnablePhysicsAddImpluseAttackHit = false;
    this->m_AttackHitPhysicsAddImpluse = 0.00f;
    this->m_bEnablePhysicsAddImpluseDamage = false;
    this->m_DamagePhysicsAddImpluse = 0.00f;
    this->m_DebugStampTargetActor = NULL;
}

