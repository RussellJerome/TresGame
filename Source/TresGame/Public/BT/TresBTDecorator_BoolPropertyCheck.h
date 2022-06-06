#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_BoolPropertyCheck.generated.h"

UCLASS()
class UTresBTDecorator_BoolPropertyCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseFunction;
    
    UPROPERTY(EditAnywhere)
    FName PropertyName;
    
    UPROPERTY(EditAnywhere)
    uint8 bAutomaticallyEnterNodeName: 1;
    
    UTresBTDecorator_BoolPropertyCheck();
};

