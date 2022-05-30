#pragma once
#include "CoreMinimal.h"
#include "TresAnimAssetUnit.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FTresAnimAssetUnit {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName AnimName;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* AnimData;
    
    TRESGAME_API FTresAnimAssetUnit();
};

