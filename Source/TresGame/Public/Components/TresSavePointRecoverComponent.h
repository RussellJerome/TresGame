#pragma once
#include "CoreMinimal.h"
#include "TresPawnOverlapComponentBase.h"
#include "TresSavePointRecoverComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresSavePointRecoverComponent : public UTresPawnOverlapComponentBase {
    GENERATED_BODY()
public:
    UTresSavePointRecoverComponent();
};

