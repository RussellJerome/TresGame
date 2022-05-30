#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTTask_BlackboardBoolValueModifier.generated.h"

UCLASS()
class UTresBTTask_BlackboardBoolValueModifier : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKey;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bValue: 1;
    
    UTresBTTask_BlackboardBoolValueModifier();
};

