#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "TresCollMgrSubTickFunction.generated.h"

USTRUCT()
struct FTresCollMgrSubTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    TRESGAME_API FTresCollMgrSubTickFunction();
};

template<>
struct TStructOpsTypeTraits<FTresCollMgrSubTickFunction> : public TStructOpsTypeTraitsBase2<FTresCollMgrSubTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

