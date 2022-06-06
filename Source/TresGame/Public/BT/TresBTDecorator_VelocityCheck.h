#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "ETresVelocityTestMode.h"
#include "TresBTDecorator_VelocityCheck.generated.h"

UCLASS()
class UTresBTDecorator_VelocityCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector Source;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EArithmeticKeyOperation::Type> Operation;
    
    UPROPERTY(EditAnywhere)
    float TestVelocity;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresVelocityTestMode::Type> TestMode;
    
    UTresBTDecorator_VelocityCheck();
};

