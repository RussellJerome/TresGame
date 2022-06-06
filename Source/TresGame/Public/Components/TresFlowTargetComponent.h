#pragma once
#include "CoreMinimal.h"
#include "TresFlowComponentBase.h"
#include "TresFlowTargetComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresFlowTargetComponent : public UTresFlowComponentBase {
    GENERATED_BODY()
public:
    UTresFlowTargetComponent();
};

