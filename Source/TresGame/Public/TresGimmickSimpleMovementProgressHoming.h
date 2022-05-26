#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSimpleMovementProgressStraight.h"
#include "TresGimmickSimpleMovementProgressHoming.generated.h"

UCLASS(NonTransient)
class UTresGimmickSimpleMovementProgressHoming : public UTresGimmickSimpleMovementProgressStraight {
    GENERATED_BODY()
public:
    UTresGimmickSimpleMovementProgressHoming();
};

