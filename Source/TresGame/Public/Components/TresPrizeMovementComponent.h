#pragma once
#include "CoreMinimal.h"
#include "TresProjectileMovementComponent.h"
#include "TresPrizeMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresPrizeMovementComponent : public UTresProjectileMovementComponent {
    GENERATED_BODY()
public:
    UTresPrizeMovementComponent();
};

