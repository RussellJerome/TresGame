#include "TresCameraAnim.h"
#include "Templates/SubclassOf.h"

class ATresCameraAnim;
class UCameraAnim;
class UObject;

void ATresCameraAnim::WaitPlayEnd(bool bDummy, FLatentActionInfo LatentInfo) {
}

void ATresCameraAnim::StartTresCameraAnim(UCameraAnim* Anim, bool bLoop, bool bTakeover, FViewTargetTransitionParamsEx TransitionParams, bool bAutoEnd, bool bEndTakeover, FViewTargetTransitionParamsEx EndTransitionParams) {
}

ATresCameraAnim* ATresCameraAnim::BP_SpawnTresCameraAnim(UObject* WorldContextObject, TSubclassOf<ATresCameraAnim> CameraClass, const FName CameraName) {
    return NULL;
}

void ATresCameraAnim::BP_SetTresCameraAnimPlayZeroFrame(bool bEbnable) {
}

void ATresCameraAnim::BP_SetTresCameraAnimCtrl(bool bEnable, float WaitTime, float ReturnTime, float LimitPitchMin, float LimitPitchMax) {
}

void ATresCameraAnim::BP_SetTresCameraAnimBaseOffset(FVector offsetLocation, FRotator OffsetRotation) {
}

ATresCameraAnim::ATresCameraAnim() {
    this->m_CamAnimIns = NULL;
    this->m_CameraInterest = NULL;
    this->m_CameraUpVector = NULL;
}

