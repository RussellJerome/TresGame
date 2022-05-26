#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresDebugDisplayManager.generated.h"

class UTresTaskExecutor;

UCLASS()
class UTresDebugDisplayManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UTresTaskExecutor* m_pTaskExecuter;
    
public:
    UTresDebugDisplayManager();
};

