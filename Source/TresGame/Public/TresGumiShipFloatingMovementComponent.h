#pragma once
#include "CoreMinimal.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "TresGumiShipFloatingMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipFloatingMovementComponent : public UFloatingPawnMovement {
    GENERATED_BODY()
public:
    UTresGumiShipFloatingMovementComponent();
};

