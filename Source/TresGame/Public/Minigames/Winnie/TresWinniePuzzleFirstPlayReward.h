#pragma once
#include "CoreMinimal.h"
#include "ETresItemDefFoodstuff.h"
#include "TresWinniePuzzleFirstPlayReward.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleFirstPlayReward {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefFoodstuff FoodStuff;
    
    UPROPERTY(EditDefaultsOnly)
    int32 EarnNum;
    
    TRESGAME_API FTresWinniePuzzleFirstPlayReward();
};

