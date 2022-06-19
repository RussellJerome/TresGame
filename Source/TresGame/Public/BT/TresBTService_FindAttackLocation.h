#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresBTService_FindAttackLocation.generated.h"

class UTresAttackDefinitionBase;

UCLASS()
class UTresBTService_FindAttackLocation : public UBTService {
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
    
    UTresBTService_FindAttackLocation();
};

