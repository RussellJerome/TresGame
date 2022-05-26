#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresNpcBTDecorator_ObjectComparison.generated.h"

UCLASS()
class UTresNpcBTDecorator_ObjectComparison : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_SourceA;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_SourceB;
    
    UPROPERTY(EditAnywhere)
    bool m_bNullCheck;
    
    UTresNpcBTDecorator_ObjectComparison();
};

