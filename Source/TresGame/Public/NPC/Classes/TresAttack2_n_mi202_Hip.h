#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionJumpBase.h"
#include "TresAttack2_n_mi202_Hip.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_n_mi202_Hip : public UTresNpcAttackDefinitionJumpBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_RootHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_HomingSpeed;
    
public:
    UTresAttack2_n_mi202_Hip();
};

