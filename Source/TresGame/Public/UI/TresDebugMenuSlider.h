#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuText.h"
#include "TresDebugMenuSelectInput.h"
#include "TresDebugMenuSlider.generated.h"

UCLASS(NonTransient)
class UTresDebugMenuSlider : public UTresDebugMenuText, public ITresDebugMenuSelectInput {
    GENERATED_BODY()
public:
    UTresDebugMenuSlider();
    
    // Fix for true pure virtual functions not being implemented
};

