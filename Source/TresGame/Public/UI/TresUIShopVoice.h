#pragma once
#include "CoreMinimal.h"
#include "TresUIShopVoice.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FTresUIShopVoice {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USoundBase* VoiceSound;
    
    UPROPERTY(EditDefaultsOnly)
    FString SubtitleTextID;
    
    UPROPERTY(EditDefaultsOnly)
    float FixedSubtitleDisplayTime;
    
    TRESGAME_API FTresUIShopVoice();
};

