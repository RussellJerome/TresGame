#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack9_e_ex301_ContinuousMoveSlash.generated.h"

UCLASS(HideDropdown)
class UTresAttack9_e_ex301_ContinuousMoveSlash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_InitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AccelSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_MaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_BrakeSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_rRotationSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_WarpHight;
    
    UPROPERTY(EditAnywhere)
    float m_BrakeDistance;
    
    UPROPERTY(EditAnywhere)
    float m_MoveMaxTime;
    
    UPROPERTY(EditAnywhere)
    bool m_CanbeEndAttackCancel;
    
public:
    UTresAttack9_e_ex301_ContinuousMoveSlash();
};

