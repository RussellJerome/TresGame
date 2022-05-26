#include "TresCameraDivingDstTgt.h"
#include "Templates/SubclassOf.h"

class UObject;
class ATresCameraDivingDstTgt;
class AActor;

ATresCameraDivingDstTgt* ATresCameraDivingDstTgt::BP_SpawnTresCameraDivingDstTgt(UObject* WorldContextObject, TSubclassOf<ATresCameraDivingDstTgt> CameraClass, const FName CameraName) {
    return NULL;
}

void ATresCameraDivingDstTgt::BP_SetTresCameraDistanceTarget(AActor* DistanceTarget) {
}

ATresCameraDivingDstTgt::ATresCameraDivingDstTgt() {
    this->m_NearTargetDistance = 1000.00f;
    this->m_NearCamDistance = 1000.00f;
    this->m_FarTargetDistance = 4000.00f;
    this->m_FarCamDistance = 400.00f;
    this->m_DistanceTarget = NULL;
}

