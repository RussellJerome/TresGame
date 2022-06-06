#include "TresCameraHe05Mountain.h"
#include "Templates/SubclassOf.h"

class UObject;
class ATresCameraHe05Mountain;

ATresCameraHe05Mountain* ATresCameraHe05Mountain::BP_SpawnTresCameraHe05Mountain(UObject* WorldContextObject, TSubclassOf<ATresCameraHe05Mountain> CameraClass, const FName CameraName) {
    return NULL;
}

ATresCameraHe05Mountain::ATresCameraHe05Mountain() {
    this->m_TitanDistance = 200.00f;
    this->m_DistanceCurve = NULL;
}

