#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraNormalDstTgt2.h"
#include "TresCameraHe903.generated.h"

class ATresCameraHe903;
class UObject;

UCLASS()
class ATresCameraHe903 : public ATresCameraNormalDstTgt2 {
    GENERATED_BODY()
public:
    ATresCameraHe903();
    UFUNCTION(BlueprintCallable)
    static ATresCameraHe903* BP_SpawnTresCameraHe903(UObject* WorldContextObject, TSubclassOf<ATresCameraHe903> CameraClass, const FName CameraName);
    
};

