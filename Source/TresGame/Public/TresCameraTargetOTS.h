#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraDistanceTarget.h"
#include "TresCameraTargetInfo.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraTargetOTS.generated.h"

class AActor;
class ATresCameraTargetOTS;
class UObject;

UCLASS()
class ATresCameraTargetOTS : public ATresCameraDistanceTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FTresCameraTargetInfo m_TargetInfo2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LimitPitchMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LimitPitchMax;
    
public:
    ATresCameraTargetOTS();
    UFUNCTION(BlueprintCallable)
    void SetLimitPitch(float Min, float Max);
    
    UFUNCTION(BlueprintCallable)
    static ATresCameraTargetOTS* BP_SpawnTresCameraTargetOTS(UObject* WorldContextObject, TSubclassOf<ATresCameraTargetOTS> CameraClass, const FName CameraName);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCameraTargetOTS_Roll(float Roll, float Time);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCamera2ndTargetParam(AActor* Target2, FVector TargetOffset, FVector TargetLocalOffset, FName TargetBoneName);
    
};

