#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraNormal.h"
#include "TresCameraDiving.generated.h"

class UObject;
class ATresCameraDiving;

UCLASS()
class ATresCameraDiving : public ATresCameraNormal {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_LerpBehindTime;
    
public:
    ATresCameraDiving();
    UFUNCTION(BlueprintCallable)
    static ATresCameraDiving* BP_SpawnTresCameraDiving(UObject* WorldContextObject, TSubclassOf<ATresCameraDiving> CameraClass, const FName CameraName);
    
};

