#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresGameTimerManagerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGameTimerManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UTresGameTimerManagerComponent();
};

