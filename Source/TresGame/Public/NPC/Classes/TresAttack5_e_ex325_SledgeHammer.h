#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack5_e_ex325_SledgeHammer.generated.h"

class UTresStateBase;

UCLASS(HideDropdown)
class UTresAttack5_e_ex325_SledgeHammer : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_BuddyState;
    
    UPROPERTY(EditAnywhere)
    bool m_IsDoCancel;
    
    UPROPERTY(EditAnywhere)
    float m_RotSpeed;
    
public:
    UTresAttack5_e_ex325_SledgeHammer();
};

