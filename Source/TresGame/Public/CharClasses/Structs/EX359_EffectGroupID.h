#pragma once
#include "CoreMinimal.h"
#include "EX359_EffectGroupID.generated.h"

USTRUCT(BlueprintType)
struct FEX359_EffectGroupID {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 ID;
    
    TRESGAME_API FEX359_EffectGroupID();
};

