#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipCollisionPrimitive.h"
#include "TresGumiShipAttackCollisionPrimitive.generated.h"

UCLASS(NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipAttackCollisionPrimitive : public UTresGumiShipCollisionPrimitive {
    GENERATED_BODY()
public:
    UTresGumiShipAttackCollisionPrimitive();
};

