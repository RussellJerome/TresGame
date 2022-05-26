#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTTask_BlackboardCopyKey.generated.h"

UCLASS()
class UTresBTTask_BlackboardCopyKey : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKeyValueB;
    
    UTresBTTask_BlackboardCopyKey();
};

