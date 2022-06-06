#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "TresMovementComponentPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FTresMovementComponentPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    TRESGAME_API FTresMovementComponentPostPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FTresMovementComponentPostPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FTresMovementComponentPostPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};
