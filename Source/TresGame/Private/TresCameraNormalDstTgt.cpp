#include "TresCameraNormalDstTgt.h"
#include "Templates/SubclassOf.h"

class UObject;
class ATresCameraNormalDstTgt;
class AActor;

ATresCameraNormalDstTgt* ATresCameraNormalDstTgt::BP_SpawnTresCameraNormalDstTgt(UObject* WorldContextObject, TSubclassOf<ATresCameraNormalDstTgt> CameraClass, const FName CameraName) {
    return NULL;
}

void ATresCameraNormalDstTgt::BP_SetTresCameraDistanceTarget(AActor* DistanceTarget) {
}

ATresCameraNormalDstTgt::ATresCameraNormalDstTgt() {
    this->m_NearTargetDistance = 1000.00f;
    this->m_NearCamDistance = 1000.00f;
    this->m_FarTargetDistance = 4000.00f;
    this->m_FarCamDistance = 400.00f;
    this->m_DistanceTarget = NULL;
}

