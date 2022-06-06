#pragma once
#include "CoreMinimal.h"
#include "ETresPlayerUniqueID.h"
#include "TresEnemyXIIIPlayerKilledVoiceData.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FTresEnemyXIIIPlayerKilledVoiceData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresPlayerUniqueID PlayerUniqueID;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* VOICE;
    
    TRESGAME_API FTresEnemyXIIIPlayerKilledVoiceData();
};

