#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPlayerPawnMoveCompoBase.h"
#include "TresGumiShipPlayerExpertMoveComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipPlayerExpertMoveComponent : public UTresGumiShipPlayerPawnMoveCompoBase {
    GENERATED_BODY()
public:
    UTresGumiShipPlayerExpertMoveComponent();
};

