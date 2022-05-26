#include "TresCameraAnimLT.h"
#include "Templates/SubclassOf.h"

class UObject;
class ATresCameraAnimLT;
class AActor;

ATresCameraAnimLT* ATresCameraAnimLT::BP_SpawnTresCameraAnimLT(UObject* WorldContextObject, TSubclassOf<ATresCameraAnimLT> CameraClass, const FName CameraName) {
    return NULL;
}

void ATresCameraAnimLT::BP_SetTresCameraLookOnlyTargetParam(AActor* LookTarget, FVector TargetOffset, FVector TargetLocalOffset, FName TargetBoneName) {
}

ATresCameraAnimLT::ATresCameraAnimLT() {
}

