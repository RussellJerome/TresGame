#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraNormal.h"
#include "TresCameraNormalDstTgt.generated.h"

class AActor;
class ATresCameraNormalDstTgt;
class UObject;

UCLASS()
class ATresCameraNormalDstTgt : public ATresCameraNormal {
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
    ATresCameraNormalDstTgt();
    UFUNCTION(BlueprintCallable)
    static ATresCameraNormalDstTgt* BP_SpawnTresCameraNormalDstTgt(UObject* WorldContextObject, TSubclassOf<ATresCameraNormalDstTgt> CameraClass, const FName CameraName);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCameraDistanceTarget(AActor* DistanceTarget);
    
};

