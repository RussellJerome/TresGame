#pragma once
#include "CoreMinimal.h"
#include "TresCameraNormal.h"
#include "TresCameraMerryGoRound.generated.h"

UCLASS(NotPlaceable)
class ATresCameraMerryGoRound : public ATresCameraNormal {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_RotYaw;
    
    UPROPERTY(EditAnywhere)
    float m_RotAmplitude;
    
    UPROPERTY(EditAnywhere)
    float m_RotFrequency;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bWavePitch: 1;
    
    UPROPERTY(EditAnywhere)
    float m_RotWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_RotReturnTime;
    
public:
    ATresCameraMerryGoRound();
    UFUNCTION(BlueprintCallable)
    void BP_SetRotationYaw(float Yaw);
    
};

