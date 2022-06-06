#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraNormalDstTgt.h"
#include "TresCameraNormalDstTgt2.generated.h"

class ATresCameraNormalDstTgt2;
class UObject;

UCLASS()
class ATresCameraNormalDstTgt2 : public ATresCameraNormalDstTgt {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_NearTargetDistance2;
    
    UPROPERTY(EditAnywhere)
    float m_NearCamDistance2;
    
    UPROPERTY(EditAnywhere)
    float m_FarTargetDistance2;
    
    UPROPERTY(EditAnywhere)
    float m_FarCamDistance2;
    
    UPROPERTY(EditAnywhere)
    float m_DistanceTargetBoneRadius2;
    
    UPROPERTY(EditAnywhere)
    FName m_DistanceTargetBoneName2;
    
    UPROPERTY(EditAnywhere)
    float m_DistanceTargetBoneRadius1;
    
public:
    ATresCameraNormalDstTgt2();
    UFUNCTION(BlueprintCallable)
    static ATresCameraNormalDstTgt2* BP_SpawnTresCameraNormalDstTgt2(UObject* WorldContextObject, TSubclassOf<ATresCameraNormalDstTgt2> CameraClass, const FName CameraName);
    
};

