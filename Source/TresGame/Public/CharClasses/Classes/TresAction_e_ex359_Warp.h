#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction_e_ex359_Warp.generated.h"

UCLASS(HideDropdown)
class UTresAction_e_ex359_Warp : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bAppear;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxWarpTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bMove;
    
    UTresAction_e_ex359_Warp();
};

