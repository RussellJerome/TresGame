#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "TresBTDecorator_HPDiffCheck.generated.h"

UCLASS()
class UTresBTDecorator_HPDiffCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector Actor;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector HitPoint;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EArithmeticKeyOperation::Type> Operation;
    
    UPROPERTY(EditAnywhere)
    int32 Value;
    
    UPROPERTY(EditAnywhere)
    uint32 IsPercentage: 1;
    
    UTresBTDecorator_HPDiffCheck();
};

