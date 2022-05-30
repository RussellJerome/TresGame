#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_SetTagCooldown.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTTask_SetTagCooldownBB.generated.h"

UCLASS()
class UTresBTTask_SetTagCooldownBB : public UBTTask_SetTagCooldown {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleDefaultsOnly)
    bool bUseBlackboard;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKey;
    
public:
    UTresBTTask_SetTagCooldownBB();
};

