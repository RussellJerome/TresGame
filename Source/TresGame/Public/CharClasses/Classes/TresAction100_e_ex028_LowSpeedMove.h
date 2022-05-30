#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction100_e_ex028_LowSpeedMove.generated.h"

UCLASS(HideDropdown)
class UTresAction100_e_ex028_LowSpeedMove : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_PitchLimit;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_YawSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_PitchSpeed;
    
    UTresAction100_e_ex028_LowSpeedMove();
};

