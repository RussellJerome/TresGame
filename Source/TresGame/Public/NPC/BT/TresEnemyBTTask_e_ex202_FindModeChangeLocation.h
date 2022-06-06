#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresEnemyBTTask_e_ex202_FindModeChangeLocation.generated.h"

class UEnvQuery;

UCLASS()
class UTresEnemyBTTask_e_ex202_FindModeChangeLocation : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_TargetLinkActorKey;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEnvQueryRunMode::Type> m_EQSRunMode;
    
    UPROPERTY(EditAnywhere)
    UEnvQuery* m_FindTargetLocationQuery;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_TargetLocationKey;
    
public:
    UTresEnemyBTTask_e_ex202_FindModeChangeLocation();
};

