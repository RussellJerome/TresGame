#include "TresCameraRotTargetLT.h"
#include "Templates/SubclassOf.h"

class UObject;
class ATresCameraRotTargetLT;
class AActor;

ATresCameraRotTargetLT* ATresCameraRotTargetLT::BP_SpawnTresCameraRotTargetLT(UObject* WorldContextObject, TSubclassOf<ATresCameraRotTargetLT> CameraClass, const FName CameraName) {
    return NULL;
}

void ATresCameraRotTargetLT::BP_SetTresCameraLookOnlyTargetParam(AActor* LookTarget, FVector TargetOffset, FVector TargetLocalOffset, FName TargetBoneName) {
}

ATresCameraRotTargetLT::ATresCameraRotTargetLT() {
}

