#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresBodyCollReactionType.h"
#include "TresBTDecorator_ScopedReactionChange.generated.h"

UCLASS()
class UTresBTDecorator_ScopedReactionChange : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresBodyCollReactionType eBodyReactionType_;
    
    UTresBTDecorator_ScopedReactionChange();
};

