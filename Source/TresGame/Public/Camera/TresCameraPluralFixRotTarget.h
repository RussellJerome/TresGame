#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraRotTarget.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraPluralFixRotTarget.generated.h"

class UObject;
class ATresCameraPluralFixRotTarget;

UCLASS()
class ATresCameraPluralFixRotTarget : public ATresCameraRotTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRotator> m_Rotations;
    
public:
    ATresCameraPluralFixRotTarget();
    UFUNCTION(BlueprintCallable)
    static ATresCameraPluralFixRotTarget* BP_SpawnTresCameraPluralFixRotTarget(UObject* WorldContextObject, TSubclassOf<ATresCameraPluralFixRotTarget> CameraClass, const FName CameraName);
    
};

