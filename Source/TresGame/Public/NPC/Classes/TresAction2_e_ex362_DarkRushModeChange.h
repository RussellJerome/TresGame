#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex362_DarkRushModeChange.generated.h"

UCLASS(HideDropdown)
class UTresAction2_e_ex362_DarkRushModeChange : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_patternID;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndWaitTime;
    
    UTresAction2_e_ex362_DarkRushModeChange();
};

