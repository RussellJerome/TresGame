#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_GigasBase_BoosterTackle.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_GigasBase_BoosterTackle : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveDist;
    
public:
    UTresAttack3_GigasBase_BoosterTackle();
};

