#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresNpcBTTask_SetCombinationPhase.generated.h"

UCLASS()
class UTresNpcBTTask_SetCombinationPhase : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_PhaseIndex;
    
    UTresNpcBTTask_SetCombinationPhase();
};

