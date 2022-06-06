#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "ETresEnemyUniqueID.h"
#include "TresNpcBTDecorator_EnemyCountCheck.generated.h"

UCLASS()
class UTresNpcBTDecorator_EnemyCountCheck : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Source;
    
    UPROPERTY(EditAnywhere)
    float m_Radius;
    
    UPROPERTY(EditAnywhere)
    int32 m_EnemyNum;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EArithmeticKeyOperation::Type> m_ArithmeticOperation;
    
    UPROPERTY(EditAnywhere)
    TArray<ETresEnemyUniqueID> m_IgnoreEnemiesUID;
    
    UPROPERTY(EditAnywhere)
    bool m_bEnableLockon;
    
    UTresNpcBTDecorator_EnemyCountCheck();
};

