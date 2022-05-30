#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuText.h"
#include "TresDebugMenuSelectInput.h"
#include "TresDebugMenuSelector.generated.h"

UCLASS(NonTransient)
class UTresDebugMenuSelector : public UTresDebugMenuText, public ITresDebugMenuSelectInput {
    GENERATED_BODY()
public:
    UTresDebugMenuSelector();
    
    // Fix for true pure virtual functions not being implemented
};

