#pragma once
#include "CoreMinimal.h"
#include "EVoiceType_e_ex359.h"
#include "VoiceSet_e_ex359.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FVoiceSet_e_ex359 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> VoiceDataArray;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EVoiceType_e_ex359> VoiceType;
    
    TRESGAME_API FVoiceSet_e_ex359();
};

