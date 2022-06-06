#pragma once
#include "CoreMinimal.h"
#include "TresGimmickHitCountComponent.h"
#include "TresGimmickReactionHitCountComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGimmickReactionHitCountComponent : public UTresGimmickHitCountComponent {
    GENERATED_BODY()
public:
    UTresGimmickReactionHitCountComponent();
};

