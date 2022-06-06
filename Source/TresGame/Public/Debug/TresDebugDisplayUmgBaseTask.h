#pragma once
#include "CoreMinimal.h"
#include "TresDebugDisplayTask.h"
#include "TresDebugDisplayUmgBaseTask.generated.h"

UCLASS(Abstract)
class UTresDebugDisplayUmgBaseTask : public UTresDebugDisplayTask {
    GENERATED_BODY()
public:
    UTresDebugDisplayUmgBaseTask();
    UFUNCTION(BlueprintImplementableEvent)
    void BP_DeleteWidget();
    
};

