#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx353ThornBeamIndex.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx353ThornBeamIndex {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString Comment;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<int32> ThornBeamIndex;
    
    TRESGAME_API FTresEnemyEx353ThornBeamIndex();
};

