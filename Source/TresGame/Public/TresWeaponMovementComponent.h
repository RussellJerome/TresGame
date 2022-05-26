#pragma once
#include "CoreMinimal.h"
#include "TresProjectileMovementComponent.h"
#include "TresWeaponMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWeaponMovementComponent : public UTresProjectileMovementComponent {
    GENERATED_BODY()
public:
    UTresWeaponMovementComponent();
};

