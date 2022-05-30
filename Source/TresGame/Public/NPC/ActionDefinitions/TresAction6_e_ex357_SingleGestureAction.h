#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_ex357_Base.h"
#include "ETresBodyCollReactionType.h"
#include "TresAction6_e_ex357_SingleGestureAction.generated.h"

UCLASS(HideDropdown)
class UTresAction6_e_ex357_SingleGestureAction : public UTresAction_e_ex357_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableOverrideBodyCollReactionType: 1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresBodyCollReactionType m_OverrideBodyCollReactionType;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MotionName;
    
public:
    UTresAction6_e_ex357_SingleGestureAction();
};

