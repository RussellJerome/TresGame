#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_IsOutsideBattleArea.generated.h"

UCLASS()
class UTresBTDecorator_IsOutsideBattleArea : public UBTDecorator {
    GENERATED_BODY()
public:
    UTresBTDecorator_IsOutsideBattleArea();
};

