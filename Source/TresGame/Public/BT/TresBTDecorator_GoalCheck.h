#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "GameplayTagContainer.h"
#include "TresBTDecorator_GoalCheck.generated.h"

UCLASS(Deprecated, NotPlaceable)
class UDEPRECATED_TresBTDecorator_GoalCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag Goal;
    
    UDEPRECATED_TresBTDecorator_GoalCheck();
};

