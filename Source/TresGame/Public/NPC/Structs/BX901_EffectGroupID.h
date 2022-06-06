#pragma once
#include "CoreMinimal.h"
#include "BX901_EffectGroupID.generated.h"

USTRUCT(BlueprintType)
struct FBX901_EffectGroupID {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 ID;
    
    TRESGAME_API FBX901_EffectGroupID();
};

