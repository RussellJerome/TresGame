#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_BlackboardLoop.generated.h"

UCLASS()
class UTresBTDecorator_BlackboardLoop : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKeyLoop;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKeyCounter;
    
    UPROPERTY(EditAnywhere)
    bool bTerminateIfChildFails;
    
    UTresBTDecorator_BlackboardLoop();
};

