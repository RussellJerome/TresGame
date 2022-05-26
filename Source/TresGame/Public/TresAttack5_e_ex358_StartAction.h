#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_ex358_Base.h"
#include "TresAttack5_e_ex358_StartAction.generated.h"

UCLASS(HideDropdown)
class UTresAttack5_e_ex358_StartAction : public UTresAction_e_ex358_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_StartTransitionTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndTransitionTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Coefficient;
    
public:
    UTresAttack5_e_ex358_StartAction();
};

