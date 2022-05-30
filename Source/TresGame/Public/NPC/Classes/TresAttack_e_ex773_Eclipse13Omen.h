#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack_e_ex773_Eclipse13Omen.generated.h"

UCLASS(HideDropdown)
class UTresAttack_e_ex773_Eclipse13Omen : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FName EventName;
    
public:
    UTresAttack_e_ex773_Eclipse13Omen();
};

