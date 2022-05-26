#pragma once
#include "CoreMinimal.h"
#include "HoldCameraVoice.generated.h"

class UTresFieldVoice;

USTRUCT(BlueprintType)
struct FHoldCameraVoice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTresFieldVoice* FieldVoiceAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Rate;
    
    TRESGAME_API FHoldCameraVoice();
};

