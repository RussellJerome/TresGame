#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "TresBTTask_TurnTo.generated.h"

UCLASS()
class UTresBTTask_TurnTo : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Offset;
    
    UPROPERTY(EditAnywhere)
    float RandomAngleLimit;
    
    UTresBTTask_TurnTo();
};

