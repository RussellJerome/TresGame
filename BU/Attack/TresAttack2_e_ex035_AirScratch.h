#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionJump.h"
#include "TresAttack2_e_ex035_AirScratch.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex035_AirScratch : public UTresAttackDefinitionJump {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fStickness;
    
    UTresAttack2_e_ex035_AirScratch();
};

