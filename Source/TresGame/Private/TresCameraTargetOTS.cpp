#include "TresCameraTargetOTS.h"
#include "Templates/SubclassOf.h"

class UObject;
class ATresCameraTargetOTS;
class AActor;

void ATresCameraTargetOTS::SetLimitPitch(float Min, float Max) {
}

ATresCameraTargetOTS* ATresCameraTargetOTS::BP_SpawnTresCameraTargetOTS(UObject* WorldContextObject, TSubclassOf<ATresCameraTargetOTS> CameraClass, const FName CameraName) {
    return NULL;
}

void ATresCameraTargetOTS::BP_SetTresCameraTargetOTS_Roll(float Roll, float Time) {
}

void ATresCameraTargetOTS::BP_SetTresCamera2ndTargetParam(AActor* Target2, FVector TargetOffset, FVector TargetLocalOffset, FName TargetBoneName) {
}

ATresCameraTargetOTS::ATresCameraTargetOTS() {
    this->m_LimitPitchMin = -40.00f;
    this->m_LimitPitchMax = 40.00f;
}

