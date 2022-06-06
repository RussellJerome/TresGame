#pragma once
#include "CoreMinimal.h"
#include "BigTornadoProjInfo.h"
#include "BigTornadoHomingProjInfo.generated.h"

USTRUCT(BlueprintType)
struct FBigTornadoHomingProjInfo : public FBigTornadoProjInfo {
    GENERATED_BODY()
public:
    TRESGAME_API FBigTornadoHomingProjInfo();
};

