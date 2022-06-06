#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionRanged.h"
#include "TresAttack1_e_ex003_Ranged.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex003_Ranged : public UTresAttackDefinitionRanged {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_shotInterval;
    
public:
    UTresAttack1_e_ex003_Ranged();
};

