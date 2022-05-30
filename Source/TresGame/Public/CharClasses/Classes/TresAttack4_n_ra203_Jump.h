#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionJumpBase.h"
#include "TresAttack4_n_ra203_Jump.generated.h"

UCLASS(HideDropdown)
class UTresAttack4_n_ra203_Jump : public UTresNpcAttackDefinitionJumpBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_RootHeight;
    
    UTresAttack4_n_ra203_Jump();
};

