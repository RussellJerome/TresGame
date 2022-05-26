#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "TresGameModeBaseLastCleanupTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FTresGameModeBaseLastCleanupTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    TRESGAME_API FTresGameModeBaseLastCleanupTickFunction();
};

