#pragma once
#include "CoreMinimal.h"
#include "TresGimmickComponentBase.h"
#include "TresWallRunEffectComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UTresWallRunEffectComponent : public UTresGimmickComponentBase {
    GENERATED_BODY()
public:
    UTresWallRunEffectComponent();
};

