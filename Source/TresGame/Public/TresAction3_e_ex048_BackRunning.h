#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction3_e_ex048_BackRunning.generated.h"

UCLASS(HideDropdown)
class UTresAction3_e_ex048_BackRunning : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_AccelMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveTime;
    
    UTresAction3_e_ex048_BackRunning();
};

