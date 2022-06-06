#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_BlackboardTimeLimit.generated.h"

UCLASS()
class UTresBTDecorator_BlackboardTimeLimit : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_TimeLimit;
    
    UTresBTDecorator_BlackboardTimeLimit();
};

