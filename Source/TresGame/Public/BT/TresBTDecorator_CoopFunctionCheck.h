#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_CoopFunctionCheck.generated.h"

UCLASS()
class UTresBTDecorator_CoopFunctionCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName FunctionName;
    
    UPROPERTY(EditAnywhere)
    uint32 bAutomaticallyEnterNodeName: 1;
    
    UTresBTDecorator_CoopFunctionCheck();
};

