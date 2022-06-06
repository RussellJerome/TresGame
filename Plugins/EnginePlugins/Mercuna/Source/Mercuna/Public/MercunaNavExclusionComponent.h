#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MercunaNavExclusionComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MERCUNA_API UMercunaNavExclusionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMercunaNavExclusionComponent();
};

