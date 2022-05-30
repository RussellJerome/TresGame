#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresBTTask_ex367_CallFunction.generated.h"

UCLASS()
class UTresBTTask_ex367_CallFunction : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName PropertyName;
    
    UTresBTTask_ex367_CallFunction();
};

