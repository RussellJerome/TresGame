#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "TresNpcBTDecorator_NpcAngleCheck.generated.h"

UCLASS()
class UTresNpcBTDecorator_NpcAngleCheck : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Source;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseToSource;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_ToSource;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Target;
    
    UPROPERTY(EditAnywhere)
    bool m_bAbs;
    
    UPROPERTY(EditAnywhere)
    float m_Angle;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EArithmeticKeyOperation::Type> m_ArithmeticOperation;
    
    UTresNpcBTDecorator_NpcAngleCheck();
};

