#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "ETresEnemyEx353FastMoveType.h"
#include "TresAction2_e_ex353_FastMove.generated.h"

class UCurveFloat;

UCLASS(HideDropdown)
class UTresAction2_e_ex353_FastMove : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyEx353FastMoveType m_FastMoveType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DestinationDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FastMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveRadiusRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveAnglePitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveNotCancelAbsTime;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    UCurveFloat* m_MoveCurveData;
    
    UTresAction2_e_ex353_FastMove();
};

