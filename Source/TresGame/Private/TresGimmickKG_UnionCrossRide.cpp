#include "TresGimmickKG_UnionCrossRide.h"

class ATresCharPawnBase;
class ATresGimmickKG_UnionCrossEnemy;
class ATresEventPawnBase;
class ASQEX_SplineActor;

void ATresGimmickKG_UnionCrossRide::StartUnionCross(ATresCharPawnBase* pPawn, ATresEventPawnBase* pAttachPawn) {
}

void ATresGimmickKG_UnionCrossRide::SetSplineSpeed(float fSpeed) {
}

void ATresGimmickKG_UnionCrossRide::SetSplineActor(ASQEX_SplineActor* splineActor) {
}

void ATresGimmickKG_UnionCrossRide::SetPlayerMoveSpeed(float AccelSpeed, float DumpingSpeed, float MaxSpeed, float BendingAngle) {
}

void ATresGimmickKG_UnionCrossRide::SetPlayerMovableLength(float Length, float Time) {
}

void ATresGimmickKG_UnionCrossRide::SetAnimType(TEnumAsByte<EGimmickKG_UnionCrossAnim> Type, bool bReset) {
}

int32 ATresGimmickKG_UnionCrossRide::RandomTableKey() {
    return 0;
}

void ATresGimmickKG_UnionCrossRide::OpenHudUx() {
}

void ATresGimmickKG_UnionCrossRide::OnSplineMoveArrival_Implementation() {
}

void ATresGimmickKG_UnionCrossRide::OnCommand_Implementation(ETresCommandKind inCommand) {
}

void ATresGimmickKG_UnionCrossRide::NotifyTimingFromPawn_Implementation(int32 InParam) {
}

bool ATresGimmickKG_UnionCrossRide::IsStateAnimEnd() const {
    return false;
}

bool ATresGimmickKG_UnionCrossRide::IsEnableShield_Implementation() const {
    return false;
}

bool ATresGimmickKG_UnionCrossRide::IsDamaged_Implementation() const {
    return false;
}

void ATresGimmickKG_UnionCrossRide::InitializeRamdomTable(int32 MaxNum) {
}

void ATresGimmickKG_UnionCrossRide::HitShield_Implementation(ATresGimmickKG_UnionCrossEnemy* Enemy) {
}

void ATresGimmickKG_UnionCrossRide::HitEnemy_Implementation(ATresGimmickKG_UnionCrossEnemy* Enemy) {
}

float ATresGimmickKG_UnionCrossRide::GetShieldSize_Implementation() const {
    return 0.0f;
}

float ATresGimmickKG_UnionCrossRide::GetPlayerSize_Implementation() const {
    return 0.0f;
}

FRotator ATresGimmickKG_UnionCrossRide::GetPlayerRotator_Implementation() const {
    return FRotator{};
}

FVector ATresGimmickKG_UnionCrossRide::GetPlayerCenter_Implementation() const {
    return FVector{};
}

void ATresGimmickKG_UnionCrossRide::EndUnionCross(ATresCharPawnBase* pPawn) {
}

void ATresGimmickKG_UnionCrossRide::CloseHudUx() {
}

bool ATresGimmickKG_UnionCrossRide::BP_CanbeCommand_Implementation(ETresCommandKind inCommand) const {
    return false;
}

void ATresGimmickKG_UnionCrossRide::AddFixedDamage(int32 Damage) {
}

bool ATresGimmickKG_UnionCrossRide::AddActionCommandUnionX(TEnumAsByte<ETresCommandKind> tresCommandKind, const FString& commandName, int32 ID) {
    return false;
}

ATresGimmickKG_UnionCrossRide::ATresGimmickKG_UnionCrossRide() {
    this->Sound_Damage = NULL;
    this->Sound_TurnningToAttack = NULL;
    this->Sound_Charge = NULL;
    this->ResoundWaitTime = 1.00f;
}

