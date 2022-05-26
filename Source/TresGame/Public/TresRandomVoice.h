#pragma once
#include "CoreMinimal.h"
#include "TresRandomVoice.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FTresRandomVoice {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USoundBase* VOICE;
    
    UPROPERTY(EditDefaultsOnly)
    int32 RandomWeights;
    
    TRESGAME_API FTresRandomVoice();
};

