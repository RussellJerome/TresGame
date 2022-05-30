#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraRotTargetCtrl.h"
#include "TresCameraRc.generated.h"

class AActor;
class ATresCameraRc;
class UObject;

UCLASS(NotPlaceable)
class ATresCameraRc : public ATresCameraRotTargetCtrl {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AActor* m_TargetActor;
    
public:
    ATresCameraRc();
    UFUNCTION(BlueprintCallable)
    void SetTresCameraRcLookActor(AActor* LookActor);
    
    UFUNCTION(BlueprintCallable)
    static ATresCameraRc* BP_SpawnTresCameraRc(UObject* WorldContextObject, TSubclassOf<ATresCameraRc> CameraClass, const FName CameraName);
    
};

