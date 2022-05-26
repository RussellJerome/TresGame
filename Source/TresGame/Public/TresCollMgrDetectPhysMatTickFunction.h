#pragma once
#include "CoreMinimal.h"
#include "TresCollMgrSubTickFunction.h"
#include "TresCollMgrDetectPhysMatTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FTresCollMgrDetectPhysMatTickFunction : public FTresCollMgrSubTickFunction {
    GENERATED_BODY()
public:
    TRESGAME_API FTresCollMgrDetectPhysMatTickFunction();
};

