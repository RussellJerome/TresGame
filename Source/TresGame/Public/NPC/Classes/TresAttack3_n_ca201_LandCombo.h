#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack3_n_ca201_LandCombo.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_n_ca201_LandCombo : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DistanceMin;
    
    UTresAttack3_n_ca201_LandCombo();
};

