#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RevengeAttacks.generated.h"

class UTresActionDefinitionBase;

USTRUCT(BlueprintType)
struct FRevengeAttacks {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresActionDefinitionBase> RevengeAttackDefinition;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bAir: 1;
    
    TRESGAME_API FRevengeAttacks();
};

