#pragma once
#include "CoreMinimal.h"
#include "TresEnemyRetryVoiceData.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FTresEnemyRetryVoiceData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName FaceAnimName;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* VOICE;
    
    TRESGAME_API FTresEnemyRetryVoiceData();
};

