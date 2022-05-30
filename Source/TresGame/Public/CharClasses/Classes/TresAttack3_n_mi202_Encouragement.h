#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack3_n_mi202_Encouragement.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_n_mi202_Encouragement : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_EncouragementTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EfectStartTime;
    
public:
    UTresAttack3_n_mi202_Encouragement();
};

