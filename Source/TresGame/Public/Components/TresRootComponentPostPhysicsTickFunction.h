#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "TresRootComponentPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FTresRootComponentPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    TRESGAME_API FTresRootComponentPostPhysicsTickFunction();
};

