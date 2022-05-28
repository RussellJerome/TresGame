#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ETresEnemyEx006ScrumState.h"
#include "TresBTTask_e_ex006_CoopScrumManagerChangeStatus.generated.h"

UCLASS()
class UTresBTTask_e_ex006_CoopScrumManagerChangeStatus : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresEnemyEx006ScrumState m_CoopStatus;
    
    UTresBTTask_e_ex006_CoopScrumManagerChangeStatus();
};

