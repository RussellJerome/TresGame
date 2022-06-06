#pragma once
#include "CoreMinimal.h"
#include "TresTaskBase.h"
#include "TresTsGameFlowTask.generated.h"

class UTresTaskExecuterBase;
class UTresTsAwardTask;

UCLASS(Abstract)
class UTresTsGameFlowTask : public UTresTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UTresTaskExecuterBase* m_pTaskExecuter;
    
    UPROPERTY(Transient)
    UTresTsAwardTask* m_pAwardTask;
    
public:
    UTresTsGameFlowTask();
};

