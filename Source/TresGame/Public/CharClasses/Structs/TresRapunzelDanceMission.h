#pragma once
#include "CoreMinimal.h"
#include "EDancePerformType.h"
#include "TresRapunzelDanceMission.generated.h"

USTRUCT(BlueprintType)
struct FTresRapunzelDanceMission {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EDancePerformType> ActionList;
    
    TRESGAME_API FTresRapunzelDanceMission();
};

