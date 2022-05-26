#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MercunaNavInclusionComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MERCUNA_API UMercunaNavInclusionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMercunaNavInclusionComponent();
};

