#include "TresCameraRotTarget2TC.h"
#include "Templates/SubclassOf.h"

class UObject;
class AActor;
class ATresCameraRotTarget2TC;

ATresCameraRotTarget2TC* ATresCameraRotTarget2TC::BP_SpawnTresCameraRotTarget2TC(UObject* WorldContextObject, TSubclassOf<ATresCameraRotTarget2TC> CameraClass, const FName CameraName) {
    return NULL;
}

void ATresCameraRotTarget2TC::BP_SetTresCamera2TCDistancePlus(bool bDistancePlus) {
}

void ATresCameraRotTarget2TC::BP_SetTresCamera2ndTargetParam(AActor* Target2, FVector TargetOffset, FVector TargetLocalOffset, FName TargetBoneName) {
}

ATresCameraRotTarget2TC::ATresCameraRotTarget2TC() {
}

