#pragma once
#include "CoreMinimal.h"
#include "TresFieldVoiceAnimData.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct TRESGAME_API FTresFieldVoiceAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString AnimName;
    
    UPROPERTY(EditAnywhere)
    UAnimationAsset* AnimAsset;
    
    UPROPERTY(EditAnywhere)
    bool isLoop;
    
    UPROPERTY(EditAnywhere)
    bool isForcePlay;
    
    UPROPERTY(EditAnywhere)
    FString SkipAnimName;
    
    UPROPERTY(EditAnywhere)
    UAnimationAsset* SkipAnimAsset;
    
    FTresFieldVoiceAnimData();
};

