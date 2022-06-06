#pragma once
#include "CoreMinimal.h"
#include "RevengeAttacks.h"
#include "RevengeAttacks_e_dw405.generated.h"

USTRUCT(BlueprintType)
struct FRevengeAttacks_e_dw405 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FRevengeAttacks RevengeAttacks;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ComboIndex;
    
    TRESGAME_API FRevengeAttacks_e_dw405();
};

