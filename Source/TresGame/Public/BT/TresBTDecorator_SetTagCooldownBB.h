#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_SetTagCooldown.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTDecorator_SetTagCooldownBB.generated.h"

UCLASS()
class UTresBTDecorator_SetTagCooldownBB : public UBTDecorator_SetTagCooldown {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bUseBlackboard;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKey;
    
public:
    UTresBTDecorator_SetTagCooldownBB();
};

