#pragma once
#include "CoreMinimal.h"
#include "TresFlowComponentBase.h"
#include "TresShootFlowComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresShootFlowComponent : public UTresFlowComponentBase {
    GENERATED_BODY()
public:
    UTresShootFlowComponent();
};

