#include "TresCameraForceLockon.h"
#include "Templates/SubclassOf.h"

class UObject;
class ATresCameraForceLockon;
class AActor;

ATresCameraForceLockon* ATresCameraForceLockon::BP_SpawnTresCameraForceLockon(UObject* WorldContextObject, TSubclassOf<ATresCameraForceLockon> CameraClass, const FName CameraName) {
    return NULL;
}

void ATresCameraForceLockon::BP_SetTresCamera2ndTargetParam(AActor* Target2, int32 Index) {
}

ATresCameraForceLockon::ATresCameraForceLockon() {
}

