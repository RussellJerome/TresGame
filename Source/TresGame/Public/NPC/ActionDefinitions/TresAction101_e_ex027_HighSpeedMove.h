#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction101_e_ex027_HighSpeedMove.generated.h"

UCLASS(HideDropdown)
class UTresAction101_e_ex027_HighSpeedMove : public UTresActionDefinitionBase {
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
    
    UTresAction101_e_ex027_HighSpeedMove();
};

