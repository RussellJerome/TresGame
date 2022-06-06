#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction10_e_ex301_TestMove.generated.h"

UCLASS(HideDropdown)
class UTresAction10_e_ex301_TestMove : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_MoveSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_MoveDist;
    
    UPROPERTY(EditAnywhere)
    float m_MoveVariationDist;
    
    UPROPERTY(EditAnywhere)
    float m_MoveHighMax;
    
    UPROPERTY(EditAnywhere)
    bool m_IsTurntoTarget;
    
    UPROPERTY(EditAnywhere)
    float m_TurntoTargetRotSpeed;
    
    UTresAction10_e_ex301_TestMove();
};

