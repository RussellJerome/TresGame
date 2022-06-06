#pragma once
#include "CoreMinimal.h"
#include "TresE_dw405SoundData.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FTresE_dw405SoundData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USoundBase* Sound;
    
    TRESGAME_API FTresE_dw405SoundData();
};

