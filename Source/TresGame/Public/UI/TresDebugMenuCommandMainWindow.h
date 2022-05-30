#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuContainer.h"
#include "TresDebugMenuCommandMainWindow.generated.h"

class UTresDebugMenuObject;
class UTresDebugMenuCommandPage;

UCLASS(NonTransient)
class UTresDebugMenuCommandMainWindow : public UTresDebugMenuContainer {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTresDebugMenuObject* m_BackGround;
    
    UPROPERTY()
    UTresDebugMenuCommandPage* m_IndexPage;
    
    UTresDebugMenuCommandMainWindow();
};

