#pragma once
#include "CoreMinimal.h"
#include "TresGameCheatManager.h"
#include "TresSharedCheatManager.generated.h"

UCLASS(Abstract)
class UTresSharedCheatManager : public UTresGameCheatManager {
    GENERATED_BODY()
public:
    UTresSharedCheatManager();
protected:
    UFUNCTION(Exec)
    void ToggleDemoDebugInfo();
    
    UFUNCTION(Exec)
    void ToggleDebugInfo();
    
};

