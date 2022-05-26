#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresBTTask_SequentialExecProcess.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTTask_SequentialAttackProcess.generated.h"

class UEnvQuery;
class UTresActionDefinitionBase;

UCLASS(Abstract)
class UTresBTTask_SequentialAttackProcess : public UTresBTTask_SequentialExecProcess {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UEnvQuery* m_QueryInstance;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardTarget;
    
    UPROPERTY(EditAnywhere)
    UEnvQuery* m_AttackQueryInstance;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresActionDefinitionBase> m_ActionDefinition;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardAttackDefinition;
    
    UPROPERTY(EditAnywhere)
    bool m_bTurnTo;
    
    UTresBTTask_SequentialAttackProcess();
};

