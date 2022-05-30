#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresBTTask_ex301_CallFunction.generated.h"

UCLASS()
class UTresBTTask_ex301_CallFunction : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName PropertyName;
    
    UTresBTTask_ex301_CallFunction();
};

