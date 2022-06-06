#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraRotTarget.h"
#include "TresCameraRotTargetAuto.generated.h"

class UObject;
class ATresCameraRotTargetAuto;

UCLASS()
class ATresCameraRotTargetAuto : public ATresCameraRotTarget {
    GENERATED_BODY()
public:
    ATresCameraRotTargetAuto();
    UFUNCTION(BlueprintCallable)
    static ATresCameraRotTargetAuto* BP_SpawnTresCameraRotTargetAuto(UObject* WorldContextObject, TSubclassOf<ATresCameraRotTargetAuto> CameraClass, const FName CameraName);
    
};

