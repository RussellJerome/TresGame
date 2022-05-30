#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TresSwimRingComponent.generated.h"

UCLASS(HideDropdown, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresSwimRingComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UTresSwimRingComponent();
};

