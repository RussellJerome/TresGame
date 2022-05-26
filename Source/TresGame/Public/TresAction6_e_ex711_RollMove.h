#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction6_e_ex711_RollMove.generated.h"

class UCurveFloat;

UCLASS(HideDropdown)
class UTresAction6_e_ex711_RollMove : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool m_bCameraIn;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TgtDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TgtMoveAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_JumpHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pro_StMoveCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pro_EndMoveCurve;
    
public:
    UTresAction6_e_ex711_RollMove();
};

