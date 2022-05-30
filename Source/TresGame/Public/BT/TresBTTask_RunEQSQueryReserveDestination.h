#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresBTTask_RunEQSQueryReserveDestination.generated.h"

UCLASS()
class UTresBTTask_RunEQSQueryReserveDestination : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_ReserveBlackboardKey;
    
    UPROPERTY(EditAnywhere)
    bool m_bReserveFloorPositioning;
    
    UPROPERTY(EditAnywhere)
    FEQSParametrizedQueryExecutionRequest EQSRequest;
    
    UTresBTTask_RunEQSQueryReserveDestination();
};

