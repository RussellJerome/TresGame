#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx351RootScale.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx351RootScale {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float TractionMaxScale;
    
    UPROPERTY(EditDefaultsOnly)
    float TractionMinScale;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bMovedCorrection: 1;
    
    TRESGAME_API FTresEnemyEx351RootScale();
};

