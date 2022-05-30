#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack10_e_ex362_BlastWave.generated.h"

class UTresStateBase;

UCLASS(HideDropdown)
class UTresAttack10_e_ex362_BlastWave : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_BuddyState;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_InvisibleTerra;
    
    UTresAttack10_e_ex362_BlastWave();
};

