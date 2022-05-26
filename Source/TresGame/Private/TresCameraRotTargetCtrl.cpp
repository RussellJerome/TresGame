#include "TresCameraRotTargetCtrl.h"
#include "Templates/SubclassOf.h"

class UObject;
class ATresCameraRotTargetCtrl;
class AActor;

ATresCameraRotTargetCtrl* ATresCameraRotTargetCtrl::BP_SpawnTresCameraRotTargetCtrl(UObject* WorldContextObject, TSubclassOf<ATresCameraRotTargetCtrl> CameraClass, const FName CameraName) {
    return NULL;
}

void ATresCameraRotTargetCtrl::BP_SetTresCameraRotTargetCtrlParam(float LimitPitchMin, float LimitPitchMax, float LimitYawMin, float LimitYawMax, bool bRotationCamera, bool bTimerReset, AActor* RotationTarget, bool bLRStick) {
}

ATresCameraRotTargetCtrl::ATresCameraRotTargetCtrl() {
    this->m_LimitPitchMin = -70.00f;
    this->m_LimitPitchMax = 70.00f;
    this->m_LimitYawMin = -45.00f;
    this->m_LimitYawMax = 45.00f;
}

