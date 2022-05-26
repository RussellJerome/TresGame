#pragma once
#include "CoreMinimal.h"
#include "TresCameraRotTarget.h"
#include "TresCameraSoKc.generated.h"

UCLASS()
class ATresCameraSoKc : public ATresCameraRotTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_PitchUDMax;
    
    UPROPERTY(EditAnywhere)
    float m_YawLRMax;
    
    UPROPERTY(EditAnywhere)
    float m_PitchRatio;
    
    UPROPERTY(EditAnywhere)
    float m_YawRatio;
    
    UPROPERTY(EditAnywhere)
    float m_ReplacementTime;
    
    UPROPERTY(EditAnywhere)
    float m_BackOffset;
    
    UPROPERTY(EditAnywhere)
    float m_CenterDistance;
    
    UPROPERTY(EditAnywhere)
    float m_SideDistance;
    
    UPROPERTY(EditAnywhere)
    float m_WaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_FixPosTime;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bDefaultPosR: 1;
    
public:
    ATresCameraSoKc();
};

