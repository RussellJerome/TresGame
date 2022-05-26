#include "TresCameraRc.h"
#include "Templates/SubclassOf.h"

class AActor;
class UObject;
class ATresCameraRc;

void ATresCameraRc::SetTresCameraRcLookActor(AActor* LookActor) {
}

ATresCameraRc* ATresCameraRc::BP_SpawnTresCameraRc(UObject* WorldContextObject, TSubclassOf<ATresCameraRc> CameraClass, const FName CameraName) {
    return NULL;
}

ATresCameraRc::ATresCameraRc() {
    this->m_TargetActor = NULL;
}

