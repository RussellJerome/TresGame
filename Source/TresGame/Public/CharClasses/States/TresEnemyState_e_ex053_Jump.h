#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Jump.h"
#include "TresEnemyState_e_ex053_Jump.generated.h"

UCLASS()
class UTresEnemyState_e_ex053_Jump : public UTresCharState_Jump {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_RotateSpeedMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotateSpeedMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotateAcceleration;
    
public:
    UTresEnemyState_e_ex053_Jump();
};

