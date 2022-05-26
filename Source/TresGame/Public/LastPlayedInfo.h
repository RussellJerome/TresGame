#pragma once
#include "CoreMinimal.h"
#include "LastPlayedInfo.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FLastPlayedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UAnimationAsset* m_pAsset;
    
    TRESGAME_API FLastPlayedInfo();
};

