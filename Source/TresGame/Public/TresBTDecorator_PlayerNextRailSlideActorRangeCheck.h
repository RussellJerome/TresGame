#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "TresBTDecorator_PlayerNextRailSlideActorRangeCheck.generated.h"

UCLASS()
class UTresBTDecorator_PlayerNextRailSlideActorRangeCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EArithmeticKeyOperation::Type> m_ArithmeticOperation;
    
    UPROPERTY(EditAnywhere)
    float m_Value;
    
    UTresBTDecorator_PlayerNextRailSlideActorRangeCheck();
};

