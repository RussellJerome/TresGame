#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex037_AirJump.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction2_e_ex037_AirJump : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_pro_ActionEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_JumpHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Speed2d;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TurnSpeed;
    
    UTresAction2_e_ex037_AirJump();
};

