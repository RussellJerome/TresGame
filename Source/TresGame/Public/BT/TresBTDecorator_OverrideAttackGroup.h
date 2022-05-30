#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "GameplayTagContainer.h"
#include "TresBTDecorator_OverrideAttackGroup.generated.h"

UCLASS()
class UTresBTDecorator_OverrideAttackGroup : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag AttackGroup;
    
    UTresBTDecorator_OverrideAttackGroup();
};

