#pragma once
#include "CoreMinimal.h"
#include "TresUIGigasGameAward.generated.h"

USTRUCT(BlueprintType)
struct FTresUIGigasGameAward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString LocalizeKey;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Score;
    
    TRESGAME_API FTresUIGigasGameAward();
};

