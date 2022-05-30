#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraTarget.h"
#include "TresCameraFixTarget.generated.h"

class ATresCameraFixTarget;
class UObject;

UCLASS()
class ATresCameraFixTarget : public ATresCameraTarget {
    GENERATED_BODY()
public:
    ATresCameraFixTarget();
    UFUNCTION(BlueprintCallable)
    static ATresCameraFixTarget* BP_SpawnTresCameraFixTarget(UObject* WorldContextObject, TSubclassOf<ATresCameraFixTarget> CameraClass, const FName CameraName);
    
};

