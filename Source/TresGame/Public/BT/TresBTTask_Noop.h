#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTTask_Noop.generated.h"

UCLASS()
class UTresBTTask_Noop : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBTNodeResult::Type> m_SelectionType;
    
    UTresBTTask_Noop();
};

