#pragma once
#include "CoreMinimal.h"
#include "TresCameraRotTarget.h"
#include "TresCameraSpecialShipHiSpd.generated.h"

UCLASS()
class ATresCameraSpecialShipHiSpd : public ATresCameraRotTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_LimitPitchMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LimitPitchMax;
    
public:
    ATresCameraSpecialShipHiSpd();
};

