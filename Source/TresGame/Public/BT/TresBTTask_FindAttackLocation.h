#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresBTTask_FindAttackLocation.generated.h"

class UTresAttackDefinitionBase;

UCLASS()
class UTresBTTask_FindAttackLocation : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresAttackDefinitionBase> AttackDefinitionOverride;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint32 bUseBlackboardQuery: 1;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector AttackDefinition;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEnvQueryRunMode::Type> RunMode;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector Result;
    
    UTresBTTask_FindAttackLocation();
};

