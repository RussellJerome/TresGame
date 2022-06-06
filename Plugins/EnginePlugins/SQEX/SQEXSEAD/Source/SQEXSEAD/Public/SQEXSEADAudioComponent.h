#pragma once
#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
#include "SQEXSEADAudioComponent.generated.h"

UCLASS(EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USQEXSEADAudioComponent : public UAudioComponent {
    GENERATED_BODY()
public:
    USQEXSEADAudioComponent();
};

