#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_ScopedCoopWorker.generated.h"

UCLASS()
class UTresBTDecorator_ScopedCoopWorker : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bExecutablePriority;
    
    UTresBTDecorator_ScopedCoopWorker();
};

