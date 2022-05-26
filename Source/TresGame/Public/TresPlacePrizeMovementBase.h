#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresPlacePrizeMovementBase.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresPlacePrizeMovementBase : public UActorComponent {
    GENERATED_BODY()
public:
    UTresPlacePrizeMovementBase();
};

