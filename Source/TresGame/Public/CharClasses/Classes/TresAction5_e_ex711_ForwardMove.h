#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction5_e_ex711_ForwardMove.generated.h"

UCLASS(HideDropdown)
class UTresAction5_e_ex711_ForwardMove : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveAddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_UpMoveSpeed;
    
public:
    UTresAction5_e_ex711_ForwardMove();
};

