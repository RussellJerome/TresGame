#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_IsChanceTimeTarget.generated.h"

UCLASS()
class UTresBTDecorator_IsChanceTimeTarget : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKey;
    
    UTresBTDecorator_IsChanceTimeTarget();
};

