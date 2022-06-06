#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack4_n_mi202_Appeal.generated.h"

UCLASS(HideDropdown)
class UTresAttack4_n_mi202_Appeal : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableCancel: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Range2D;
    
public:
    UTresAttack4_n_mi202_Appeal();
};

