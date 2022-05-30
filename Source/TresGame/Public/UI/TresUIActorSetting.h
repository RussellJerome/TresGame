#pragma once
#include "CoreMinimal.h"
#include "TresUIActorSetting.generated.h"

USTRUCT(BlueprintType)
struct FTresUIActorSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 LightSetIndex;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PostProcessSetIndex;
    
    TRESGAME_API FTresUIActorSetting();
};

