#include "TresCameraRotTarget.h"
#include "Templates/SubclassOf.h"

class ATresCameraRotTarget;
class UObject;

void ATresCameraRotTarget::SetTresCameraRotTargetParam(float Distance, FRotator Rotation, FVector TargetOffset, FVector TargetLocalOffset) {
}

void ATresCameraRotTarget::SetBaseRotation(FRotator Rotation, float Time) {
}

FRotator ATresCameraRotTarget::GetDefaultBaseRotation() const {
    return FRotator{};
}

FRotator ATresCameraRotTarget::GetBaseRotation() const {
    return FRotator{};
}

ATresCameraRotTarget* ATresCameraRotTarget::BP_SpawnTresCameraRotTarget(UObject* WorldContextObject, TSubclassOf<ATresCameraRotTarget> CameraClass, const FName CameraName) {
    return NULL;
}

void ATresCameraRotTarget::BP_SetControllerStick(TEnumAsByte<ETresCameraStick> LRStick) {
}

void ATresCameraRotTarget::BP_SetAutoRotationParam(FRotator AutoRotation, bool bLerpAutoRotationYaw) {
}

ATresCameraRotTarget::ATresCameraRotTarget() {
}

