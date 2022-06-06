#pragma once
#include "CoreMinimal.h"
#include "Components/ChildActorComponent.h"
#include "TresChildActorComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresChildActorComponent : public UChildActorComponent {
    GENERATED_BODY()
public:
    UTresChildActorComponent();
};

