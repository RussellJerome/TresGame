#pragma once
#include "CoreMinimal.h"
#include "TresTaskExecuterBase.h"
#include "TresTaskExecutor.generated.h"

class UTresTaskBase;

UCLASS(BlueprintType)
class UTresTaskExecutor : public UTresTaskExecuterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<UTresTaskBase*> m_TaskArrayGarbage;
    
public:
    UTresTaskExecutor();
    UFUNCTION(BlueprintPure)
    TArray<UTresTaskBase*> GetTaskArray();
    
    UFUNCTION(BlueprintCallable)
    void DestroyAll();
    
};

