#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraDiving.h"
#include "TresCameraDivingDstTgt.generated.h"

class UObject;
class AActor;
class ATresCameraDivingDstTgt;

UCLASS()
class ATresCameraDivingDstTgt : public ATresCameraDiving {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName m_DistanceTargetBoneName1;
    
    UPROPERTY(EditAnywhere)
    float m_NearTargetDistance;
    
    UPROPERTY(EditAnywhere)
    float m_NearCamDistance;
    
    UPROPERTY(EditAnywhere)
    float m_FarTargetDistance;
    
    UPROPERTY(EditAnywhere)
    float m_FarCamDistance;
    
    UPROPERTY()
    AActor* m_DistanceTarget;
    
public:
    ATresCameraDivingDstTgt();
    UFUNCTION(BlueprintCallable)
    static ATresCameraDivingDstTgt* BP_SpawnTresCameraDivingDstTgt(UObject* WorldContextObject, TSubclassOf<ATresCameraDivingDstTgt> CameraClass, const FName CameraName);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCameraDistanceTarget(AActor* DistanceTarget);
    
};

