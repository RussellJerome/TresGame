#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraDistanceTarget.h"
#include "ETresCameraStick.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraRotTarget.generated.h"

class UObject;
class ATresCameraRotTarget;

UCLASS()
class ATresCameraRotTarget : public ATresCameraDistanceTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator m_Rotation;
    
public:
    ATresCameraRotTarget();
    UFUNCTION(BlueprintCallable)
    void SetTresCameraRotTargetParam(float Distance, FRotator Rotation, FVector TargetOffset, FVector TargetLocalOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseRotation(FRotator Rotation, float Time);
    
    UFUNCTION(BlueprintPure)
    FRotator GetDefaultBaseRotation() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetBaseRotation() const;
    
    UFUNCTION(BlueprintCallable)
    static ATresCameraRotTarget* BP_SpawnTresCameraRotTarget(UObject* WorldContextObject, TSubclassOf<ATresCameraRotTarget> CameraClass, const FName CameraName);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetControllerStick(TEnumAsByte<ETresCameraStick> LRStick);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetAutoRotationParam(FRotator AutoRotation, bool bLerpAutoRotationYaw);
    
};

