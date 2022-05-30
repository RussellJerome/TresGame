#pragma once
#include "CoreMinimal.h"
#include "TresCollMgrSubTickFunction.h"
#include "TresCollMgrDetectBodyCollTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FTresCollMgrDetectBodyCollTickFunction : public FTresCollMgrSubTickFunction {
    GENERATED_BODY()
public:
    TRESGAME_API FTresCollMgrDetectBodyCollTickFunction();
};

template<>
struct TStructOpsTypeTraits<FTresCollMgrDetectBodyCollTickFunction> : public TStructOpsTypeTraitsBase2<FTresCollMgrDetectBodyCollTickFunction>
{
    enum
    {
        WithCopy = false
    };
};