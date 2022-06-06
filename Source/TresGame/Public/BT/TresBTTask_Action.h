#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ETresAIActionAbortTimingID.h"
#include "TresBTTask_Action.generated.h"

class UTresActionDefinitionBase;

UCLASS()
class UTresBTTask_Action : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Target;
    
    UPROPERTY(VisibleDefaultsOnly)
    bool m_bUseBlackboardActionDefinition;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardActionDefinition;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresActionDefinitionBase> m_ActionDefinition;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    ETresAIActionAbortTimingID m_AIActionAbortTimingID;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float m_AbortTime;
    
    UTresBTTask_Action();
};

