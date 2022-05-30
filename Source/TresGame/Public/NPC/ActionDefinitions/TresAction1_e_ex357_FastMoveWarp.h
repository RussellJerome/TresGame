#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_ex357_Base.h"
#include "TresAction1_e_ex357_FastMoveWarp.generated.h"

UCLASS(HideDropdown)
class UTresAction1_e_ex357_FastMoveWarp : public UTresAction_e_ex357_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_WarpInStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableActionAbortWait: 1;
    
public:
    UTresAction1_e_ex357_FastMoveWarp();
};

