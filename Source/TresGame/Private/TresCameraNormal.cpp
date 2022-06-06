#include "TresCameraNormal.h"
#include "Templates/SubclassOf.h"

class UObject;
class ATresCameraNormal;

void ATresCameraNormal::SetLimitPitch(float Min, float Max) {
}

void ATresCameraNormal::SetAimRotation(FRotator Rot, bool bWorld, float Time) {
}

ATresCameraNormal* ATresCameraNormal::BP_SpawnTresCameraNormal(UObject* WorldContextObject, TSubclassOf<ATresCameraNormal> CameraClass, const FName CameraName) {
    return NULL;
}

void ATresCameraNormal::BP_SetTargetMaxSpeed(float TargetMaxSpeed) {
}

void ATresCameraNormal::BP_SetLockonLimitYaw(float LimitYaw) {
}

void ATresCameraNormal::BP_SetLockonDistance(float Distance, float Time) {
}

void ATresCameraNormal::BP_SetLockonBaseRotation(FRotator BaseRotation, bool bWorldPitch, bool bApplyAllPitch, bool bForce, float Time) {
}

void ATresCameraNormal::BP_SetAutoTurningPower(float TurningPower) {
}

void ATresCameraNormal::BP_ResetLockonLimitYaw() {
}

void ATresCameraNormal::BP_ResetLockonDistance(float Time) {
}

void ATresCameraNormal::BP_ResetLockonBaseRotation(bool bForce, float Time) {
}

bool ATresCameraNormal::BP_IsLockon() {
    return false;
}

float ATresCameraNormal::BP_GetLockonDistance() const {
    return 0.0f;
}

FRotator ATresCameraNormal::BP_GetLockonBaseRotation() {
    return FRotator{};
}

void ATresCameraNormal::BP_EnableWorldBaseRotation(bool bEnable) {
}

void ATresCameraNormal::BP_EnableMoveRotation(bool bEnable) {
}

void ATresCameraNormal::BP_EnableLockonMoveRotation(bool bEnable) {
}

ATresCameraNormal::ATresCameraNormal() {
    this->m_LimitPitchMin = -70.00f;
    this->m_LimitPitchMax = 50.00f;
    this->m_LimitYawMax = 0.00f;
    this->m_bLimitYawBase = false;
    this->m_TargetMaxSpeed = 800.00f;
    this->m_WallDistance = 700.00f;
    this->m_AutoTurningPower = 1.20f;
    this->m_MoveRotationWaitTime = 1.50f;
    this->m_bMoveRotation = true;
    this->m_bWorldBaseRotation = false;
    this->m_NonBattleDistance = 0.00f;
    this->m_NearDistance = 0.00f;
    this->m_NearTargetOffsetZ = 0.00f;
    this->m_NearTargetOffsetZDistance = 0.00f;
    this->m_LockonLimitPitchMin = -70.00f;
    this->m_LockonLimitPitchMax = 20.00f;
    this->m_LockonLimitYawMax = 120.00f;
    this->m_RotationSpeedMaxDistance = 1000.00f;
    this->m_RotationSpeedMinDistance = 200.00f;
    this->m_RotationSpeedMaxRate = 0.50f;
    this->m_bLockonMoveRotation = true;
    this->m_LockonAutoRotationLowDist = 0.00f;
    this->m_LockonAutoRotationHighDist = 0.00f;
    this->m_bLockonAutoRotationDist3 = false;
    this->m_bLockonTargetOffset = false;
    this->m_LockonTargetOffsetZ = 0.00f;
}

