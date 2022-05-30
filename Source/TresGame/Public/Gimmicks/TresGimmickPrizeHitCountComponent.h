#pragma once
#include "CoreMinimal.h"
#include "TresGimmickHitCountComponent.h"
#include "TresGimmickPrizeHitCountComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGimmickPrizeHitCountComponent : public UTresGimmickHitCountComponent {
    GENERATED_BODY()
public:
    UTresGimmickPrizeHitCountComponent();
};

