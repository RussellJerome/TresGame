#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionLandCodeDriven.h"
#include "ETresBodyCollReactionType.h"
#include "TresMove_e_ex781_Base.generated.h"

UCLASS()
class UTresMove_e_ex781_Base : public UTresLocomotionDefinitionLandCodeDriven {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableOverrideBodyCollReactionType: 1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresBodyCollReactionType m_OverrideBodyCollReactionType;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_EndWarp;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ForwardRunLoopTime;
    
public:
    UTresMove_e_ex781_Base();
};

