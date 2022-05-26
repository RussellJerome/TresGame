#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresNpcBTTask_UpdateLeadPoint.generated.h"

UCLASS()
class UTresNpcBTTask_UpdateLeadPoint : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_LeadTarget;
    
    UTresNpcBTTask_UpdateLeadPoint();
};

