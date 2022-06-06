#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_HasAttackPermission.generated.h"

UCLASS()
class UTresBTDecorator_HasAttackPermission : public UBTDecorator {
    GENERATED_BODY()
public:
    UTresBTDecorator_HasAttackPermission();
};

