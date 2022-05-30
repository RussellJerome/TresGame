#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction4_e_ex731_Land.generated.h"

UCLASS(HideDropdown)
class UTresAction4_e_ex731_Land : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fFallVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackDataID;
    
    UTresAction4_e_ex731_Land();
};

