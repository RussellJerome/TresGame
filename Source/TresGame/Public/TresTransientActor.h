#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresTransientActor.generated.h"

UCLASS(Abstract, Transient)
class ATresTransientActor : public AActor {
    GENERATED_BODY()
public:
    ATresTransientActor();
};

