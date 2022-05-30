#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction5_e_ex711_BackMove.generated.h"

class UCurveFloat;

UCLASS(HideDropdown)
class UTresAction5_e_ex711_BackMove : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveAddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TgtDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_SideMoveDist;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pro_MoveCurve;
    
    UTresAction5_e_ex711_BackMove();
};

