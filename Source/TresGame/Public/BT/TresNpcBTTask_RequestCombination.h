#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ETresFNpcAICombiID.h"
#include "TresNpcBTTask_RequestCombination.generated.h"

UCLASS()
class UTresNpcBTTask_RequestCombination : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresFNpcAICombiID m_CombiID;
    
    UTresNpcBTTask_RequestCombination();
};

