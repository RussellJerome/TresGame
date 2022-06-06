#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex003_MeteorAttack.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_ex003_MeteorAttack : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_RiseSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RiseDistance;
    
public:
    UTresAttack3_e_ex003_MeteorAttack();
};

