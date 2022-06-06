#include "TresCameraNormalDstTgt2.h"
#include "Templates/SubclassOf.h"

class UObject;
class ATresCameraNormalDstTgt2;

ATresCameraNormalDstTgt2* ATresCameraNormalDstTgt2::BP_SpawnTresCameraNormalDstTgt2(UObject* WorldContextObject, TSubclassOf<ATresCameraNormalDstTgt2> CameraClass, const FName CameraName) {
    return NULL;
}

ATresCameraNormalDstTgt2::ATresCameraNormalDstTgt2() {
    this->m_NearTargetDistance2 = 1000.00f;
    this->m_NearCamDistance2 = 1000.00f;
    this->m_FarTargetDistance2 = 4000.00f;
    this->m_FarCamDistance2 = 400.00f;
    this->m_DistanceTargetBoneRadius2 = 0.00f;
    this->m_DistanceTargetBoneRadius1 = 0.00f;
}

