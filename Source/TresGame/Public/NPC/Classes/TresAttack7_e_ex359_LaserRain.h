#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "EX359_LaserOnTimeInfoSet.h"
#include "EX359_LaserRainShotEffectTimeSet.h"
#include "TresAttack7_e_ex359_LaserRain.generated.h"

UCLASS(HideDropdown)
class UTresAttack7_e_ex359_LaserRain : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FEX359_LaserOnTimeInfoSet m_LaserOnTimeInfoSet;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX359_LaserRainShotEffectTimeSet> m_fShotEffectTimeSetArray;
    
    UTresAttack7_e_ex359_LaserRain();
};

