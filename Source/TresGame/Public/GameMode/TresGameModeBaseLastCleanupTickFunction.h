#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "UObject/Class.h"
#include "TresGameModeBaseLastCleanupTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FTresGameModeBaseLastCleanupTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    TRESGAME_API FTresGameModeBaseLastCleanupTickFunction();
    
};

template<>
struct TStructOpsTypeTraits<FTresGameModeBaseLastCleanupTickFunction> : public TStructOpsTypeTraitsBase2<FTresGameModeBaseLastCleanupTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

