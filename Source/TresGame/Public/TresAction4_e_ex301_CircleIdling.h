#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction4_e_ex301_CircleIdling.generated.h"

class UAnimationAsset;

UCLASS(HideDropdown)
class UTresAction4_e_ex301_CircleIdling : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_WarpTimeParam;
    
    UPROPERTY(EditAnywhere)
    float m_RotSpeedParam;
    
    UPROPERTY(EditAnywhere)
    float m_BackSpeedParam;
    
    UPROPERTY(EditAnywhere)
    float m_BackDownSpeedParam;
    
    UPROPERTY(EditAnywhere)
    float m_BackSpeedMinParam;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_FlightLoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_FlightEndAnimData;
    
public:
    UTresAction4_e_ex301_CircleIdling();
};

