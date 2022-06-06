#pragma once
#include "CoreMinimal.h"
#include "TresGimmickGeneratorBase.h"
#include "TresTransientGimmickGeneratorBase.generated.h"

UCLASS(Abstract, Transient)
class ATresTransientGimmickGeneratorBase : public ATresGimmickGeneratorBase {
    GENERATED_BODY()
public:
    ATresTransientGimmickGeneratorBase();
};

