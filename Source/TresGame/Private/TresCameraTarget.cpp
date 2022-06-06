#include "TresCameraTarget.h"

class ATresAccompanyPawnBase;
class AActor;
class UTresLockonTargetComponent;

void ATresCameraTarget::SetTresCameraTargetInfluenceRotationValue(bool bYaw, bool bPitch, bool bRoll, FRotator TargetRotation) {
}

void ATresCameraTarget::SetTresCameraTargetInfluenceRotation(bool bAlways, float AlWaysTime, bool bYaw, bool bPitch, bool bRoll) {
}

void ATresCameraTarget::SetTresCameraTargetInfluenceLocationXYZ(bool bAlwaysXY, bool bAlwaysZ) {
}

void ATresCameraTarget::SetTresCameraTargetInfluenceLocation(bool bAlways) {
}

void ATresCameraTarget::SetTargetBoneName(FName BoneName) {
}

void ATresCameraTarget::SetOutsideWallCheckType(TEnumAsByte<ETresCameraTargetWallCheckType> WallCheckType, FVector TargetPos, FName TargetBoneName, ATresAccompanyPawnBase* TargetAccompanyPawn) {
}

FVector ATresCameraTarget::GetTargetOffset() const {
    return FVector{};
}

FVector ATresCameraTarget::GetTargetLocalOffset() const {
    return FVector{};
}

FName ATresCameraTarget::GetTargetBoneName() const {
    return NAME_None;
}

FVector ATresCameraTarget::GetDefaultTargetOffset() const {
    return FVector{};
}

FVector ATresCameraTarget::GetDefaultTargetLocalOffset() const {
    return FVector{};
}

FVector ATresCameraTarget::GetDefaultCameraLocalOffset() const {
    return FVector{};
}

FVector ATresCameraTarget::GetCameraLocalOffset() const {
    return FVector{};
}

void ATresCameraTarget::EnableCollision(bool bEnable) {
}

void ATresCameraTarget::BP_SetTresCameraLocalOffset(FVector CameraLocalOffset, float Time) {
}

void ATresCameraTarget::BP_SetTargetOffset(FVector TargetOffset, float Time) {
}

void ATresCameraTarget::BP_SetTargetLocalOffset(FVector TargetLocalOffset, float Time) {
}

void ATresCameraTarget::BP_SetTargetComponent(UTresLockonTargetComponent* pTargetComp) {
}

void ATresCameraTarget::BP_RemoveCollisionIgnoredActor(AActor* Actor) {
}

bool ATresCameraTarget::BP_IsAttachTresCameraTarget() const {
    return false;
}

void ATresCameraTarget::BP_AttachTresCameraTarget(bool bAttach) {
}

void ATresCameraTarget::BP_AddCollisionIgnoredActor(AActor* Actor) {
}

ATresCameraTarget::ATresCameraTarget() {
}

