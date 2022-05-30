#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickBlockadeSkeletalBase.generated.h"

UCLASS(Abstract, Config=Game)
class ATresGimmickBlockadeSkeletalBase : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
    ATresGimmickBlockadeSkeletalBase();
};

