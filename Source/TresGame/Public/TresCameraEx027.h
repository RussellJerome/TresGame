#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraDivingDstTgt.h"
#include "TresCameraEx027.generated.h"

class ATresCameraEx027;
class UObject;

UCLASS()
class ATresCameraEx027 : public ATresCameraDivingDstTgt {
    GENERATED_BODY()
public:
    ATresCameraEx027();
    UFUNCTION(BlueprintCallable)
    static ATresCameraEx027* BP_SpawnTresCameraEx027(UObject* WorldContextObject, TSubclassOf<ATresCameraEx027> CameraClass, const FName CameraName);
    
};

