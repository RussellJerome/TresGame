#pragma once
#include "CoreMinimal.h"
#include "TresTaskBase.h"
#include "TresTsAwardData.h"
#include "TresTsAwardTask.generated.h"

UCLASS(Abstract)
class UTresTsAwardTask : public UTresTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<FTresTsAwardData> m_Awards;
    
public:
    UTresTsAwardTask();
};

