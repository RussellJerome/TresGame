#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ETresHateCompare.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "TresBTDecorator_HateCheck.generated.h"

UCLASS()
class UTresBTDecorator_HateCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresHateCompare::Type> m_HateCompare;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EArithmeticKeyOperation::Type> m_ArithmeticOperation;
    
    UPROPERTY(EditAnywhere)
    float m_Value;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint32 m_bUseBlackboard: 1;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_TargetActor;
    
    UTresBTDecorator_HateCheck();
};

