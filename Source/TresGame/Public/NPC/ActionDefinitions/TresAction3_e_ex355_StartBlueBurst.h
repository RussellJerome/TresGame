#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction3_e_ex355_StartBlueBurst.generated.h"

UCLASS(HideDropdown)
class UTresAction3_e_ex355_StartBlueBurst : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fLoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_bEventName;
    
    UPROPERTY()
    bool m_bNotifyEvent;
    
    UTresAction3_e_ex355_StartBlueBurst();
};

