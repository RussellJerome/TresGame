#pragma once
#include "CoreMinimal.h"
#include "TresCollMgrSubTickFunction.h"
#include "TresCollMgrFootStepEffectGenTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FTresCollMgrFootStepEffectGenTickFunction : public FTresCollMgrSubTickFunction {
    GENERATED_BODY()
public:
    TRESGAME_API FTresCollMgrFootStepEffectGenTickFunction();
};

template<>
struct TStructOpsTypeTraits<FTresCollMgrFootStepEffectGenTickFunction> : public TStructOpsTypeTraitsBase2<FTresCollMgrFootStepEffectGenTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

