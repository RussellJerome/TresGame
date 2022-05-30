#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresDebugMenuObject.generated.h"

class UTresDebugMenuScene;
class UTresDebugMenuContainer;

UCLASS(Transient)
class UTresDebugMenuObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTresDebugMenuScene* m_MenuScene;
    
    UPROPERTY()
    UTresDebugMenuContainer* m_Parent;
    
    UTresDebugMenuObject();
};

