#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction4_e_ex711_CautionMove.generated.h"

UCLASS(HideDropdown)
class UTresAction4_e_ex711_CautionMove : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveAddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TurnSpeed2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_UpMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TgtDist;
    
    UPROPERTY(EditAnywhere)
    bool m_pro_bFloor;
    
    UTresAction4_e_ex711_CautionMove();
};

