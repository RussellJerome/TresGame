#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_ValidateCoopWorker.generated.h"

UCLASS()
class UTresBTDecorator_ValidateCoopWorker : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bExecutablePriority;
    
    UTresBTDecorator_ValidateCoopWorker();
};

