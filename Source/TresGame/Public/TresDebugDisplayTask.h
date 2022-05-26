#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresTaskBase.h"
#include "TresDebugDisplayTask.generated.h"

class UTresInputTask;
class UTresTaskExecutor;
class UTresDebugTask;

UCLASS(Abstract)
class UTresDebugDisplayTask : public UTresTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    UTresInputTask* InputManaer;
    
    UPROPERTY(Transient)
    UTresTaskExecutor* m_pTaskExecuter;
    
public:
    UTresDebugDisplayTask();
    UFUNCTION(BlueprintPure)
    UTresTaskExecutor* GetTresTaskExecutor();
    
    UFUNCTION(BlueprintPure)
    TArray<FString> GetArgs();
    
    UFUNCTION(BlueprintPure)
    float GetAppScale();
    
    UFUNCTION(BlueprintCallable)
    void CreateDebugTask(TSubclassOf<UTresDebugTask> Class, UTresDebugTask*& Out);
    
};

