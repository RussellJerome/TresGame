#pragma once
#include "CoreMinimal.h"
#include "TresLockonTargetComponent.h"
#include "TresFlowComponentBase.generated.h"

UCLASS(Abstract, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresFlowComponentBase : public UTresLockonTargetComponent {
    GENERATED_BODY()
public:
    UTresFlowComponentBase();
};

