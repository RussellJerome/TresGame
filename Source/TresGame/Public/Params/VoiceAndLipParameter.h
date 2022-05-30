#pragma once
#include "CoreMinimal.h"
#include "VoiceAndLipParameter.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FVoiceAndLipParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName GroupID;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* pAsset;
    
    UPROPERTY(EditDefaultsOnly)
    FName LipName;
    
    TRESGAME_API FVoiceAndLipParameter();
};

