#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuObject.h"
#include "TresDebugMenuContainer.generated.h"

UCLASS(NonTransient)
class UTresDebugMenuContainer : public UTresDebugMenuObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UTresDebugMenuObject*> m_MenuObjects;
    
    UTresDebugMenuContainer();
};

