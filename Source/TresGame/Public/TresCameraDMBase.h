#pragma once
#include "CoreMinimal.h"
#include "TresCameraNormal.h"
#include "TresCameraDMBase.generated.h"

UCLASS(NotPlaceable)
class ATresCameraDMBase : public ATresCameraNormal {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_JumpRate;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bJumpEndPitchReset: 1;
    
    UPROPERTY(EditAnywhere)
    float m_JumpEndResetTime;
    
    UPROPERTY(EditAnywhere)
    float m_JumpLookRate;
    
public:
    ATresCameraDMBase();
};

