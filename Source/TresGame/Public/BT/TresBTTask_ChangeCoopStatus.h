#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ETresCoopRunningStatus.h"
#include "TresBTTask_ChangeCoopStatus.generated.h"

UCLASS()
class UTresBTTask_ChangeCoopStatus : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresCoopRunningStatus m_CoopStatus;
    
    UTresBTTask_ChangeCoopStatus();
};

