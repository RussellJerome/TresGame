#include "TresCameraDistanceAdjust2T.h"
#include "Templates/SubclassOf.h"

class UObject;
class ATresCameraDistanceAdjust2T;
class AActor;

ATresCameraDistanceAdjust2T* ATresCameraDistanceAdjust2T::BP_SpawnTresCameraDistanceAdjust2T(UObject* WorldContextObject, TSubclassOf<ATresCameraDistanceAdjust2T> CameraClass, const FName CameraName) {
    return NULL;
}

void ATresCameraDistanceAdjust2T::BP_SetTresCamera2ndTargetParam(AActor* Target2, FVector TargetOffset, FVector TargetLocalOffset, FName TargetBoneName, float TargetRadius, float Target1Radius) {
}

ATresCameraDistanceAdjust2T::ATresCameraDistanceAdjust2T() {
}

