#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickGigas.generated.h"

UCLASS(Abstract, Config=Game)
class ATresGimmickGigas : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
    ATresGimmickGigas();
};

