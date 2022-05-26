#pragma once
#include "CoreMinimal.h"
#include "ETresAbilityKind.h"
#include "ETresVictoryBonusKind.h"
#include "TresVictoryBonusUnit.generated.h"

USTRUCT()
struct FTresVictoryBonusUnit {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresVictoryBonusKind m_Bonus;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAbilityKind m_Ability;
    
    TRESGAME_API FTresVictoryBonusUnit();
};

