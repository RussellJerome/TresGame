#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraRotTarget.h"
#include "TresCameraTargetInfo.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraDistanceAdjust2T.generated.h"

class UObject;
class ATresCameraDistanceAdjust2T;
class AActor;

UCLASS(NotPlaceable)
class ATresCameraDistanceAdjust2T : public ATresCameraRotTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FTresCameraTargetInfo m_TargetInfo2;
    
public:
    ATresCameraDistanceAdjust2T();
    UFUNCTION(BlueprintCallable)
    static ATresCameraDistanceAdjust2T* BP_SpawnTresCameraDistanceAdjust2T(UObject* WorldContextObject, TSubclassOf<ATresCameraDistanceAdjust2T> CameraClass, const FName CameraName);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCamera2ndTargetParam(AActor* Target2, FVector TargetOffset, FVector TargetLocalOffset, FName TargetBoneName, float TargetRadius, float Target1Radius);
    
};

