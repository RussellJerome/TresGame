#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ETresAIActionAbortTimingID.h"
#include "TresBTTask_ActionWithDestination.generated.h"

class UTresActionDefinitionBase;

UCLASS()
class UTresBTTask_ActionWithDestination : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Target;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Destination;
    
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
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool m_bUpdateDestination;
    
    UTresBTTask_ActionWithDestination();
};

