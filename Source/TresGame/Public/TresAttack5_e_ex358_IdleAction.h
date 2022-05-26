#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_ex358_Base.h"
#include "TresAttack5_e_ex358_IdleAction.generated.h"

UCLASS(HideDropdown)
class UTresAttack5_e_ex358_IdleAction : public UTresAction_e_ex358_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_LoopTime;
    
public:
    UTresAttack5_e_ex358_IdleAction();
};

