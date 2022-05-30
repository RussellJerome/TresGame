#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraRotTarget.h"
#include "TresCameraRotTargetCtrl.generated.h"

class UObject;
class ATresCameraRotTargetCtrl;
class AActor;

UCLASS()
class ATresCameraRotTargetCtrl : public ATresCameraRotTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LimitPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LimitPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LimitYawMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LimitYawMax;
    
public:
    ATresCameraRotTargetCtrl();
    UFUNCTION(BlueprintCallable)
    static ATresCameraRotTargetCtrl* BP_SpawnTresCameraRotTargetCtrl(UObject* WorldContextObject, TSubclassOf<ATresCameraRotTargetCtrl> CameraClass, const FName CameraName);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCameraRotTargetCtrlParam(float LimitPitchMin, float LimitPitchMax, float LimitYawMin, float LimitYawMax, bool bRotationCamera, bool bTimerReset, AActor* RotationTarget, bool bLRStick);
    
};

