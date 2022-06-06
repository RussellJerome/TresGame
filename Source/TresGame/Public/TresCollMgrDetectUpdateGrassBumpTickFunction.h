#pragma once
#include "CoreMinimal.h"
#include "TresCollMgrSubTickFunction.h"
#include "TresCollMgrDetectUpdateGrassBumpTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FTresCollMgrDetectUpdateGrassBumpTickFunction : public FTresCollMgrSubTickFunction {
    GENERATED_BODY()
public:
    TRESGAME_API FTresCollMgrDetectUpdateGrassBumpTickFunction();
};

template<>
struct TStructOpsTypeTraits<FTresCollMgrDetectUpdateGrassBumpTickFunction> : public TStructOpsTypeTraitsBase2<FTresCollMgrDetectUpdateGrassBumpTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

