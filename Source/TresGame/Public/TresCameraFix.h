#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraBase.h"
#include "TresCameraFix.generated.h"

class UObject;
class ATresCameraFix;

UCLASS()
class ATresCameraFix : public ATresCameraBase {
    GENERATED_BODY()
public:
    ATresCameraFix();
    UFUNCTION(BlueprintCallable)
    static ATresCameraFix* BP_SpawnTresCameraFix(UObject* WorldContextObject, TSubclassOf<ATresCameraFix> CameraClass, const FName CameraName);
    
};

