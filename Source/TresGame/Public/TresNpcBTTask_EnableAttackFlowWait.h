#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresNpcBTTask_EnableAttackFlowWait.generated.h"

UCLASS()
class UTresNpcBTTask_EnableAttackFlowWait : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bEnable;
    
    UTresNpcBTTask_EnableAttackFlowWait();
};

