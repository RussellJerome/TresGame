#pragma once
#include "CoreMinimal.h"
#include "TresCameraRotTarget.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraSpecialShipLoc.generated.h"

UCLASS()
class ATresCameraSpecialShipLoc : public ATresCameraRotTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FVector m_PluralTargetOffset[4];
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_PluralTargetLocalOffset[4];
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_PluralBaseRotation[4];
    
    UPROPERTY(EditDefaultsOnly)
    float m_PluralLimitYawMin[4];
    
    UPROPERTY(EditDefaultsOnly)
    float m_PluralLimitYawMax[4];
    
    UPROPERTY(EditDefaultsOnly)
    float m_LimitPitchMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LimitPitchMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SwitchWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SwitchInterpTime;
    
public:
    ATresCameraSpecialShipLoc();
};

