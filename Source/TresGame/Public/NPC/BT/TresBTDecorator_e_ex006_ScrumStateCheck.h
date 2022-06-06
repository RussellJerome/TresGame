#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresEnemyEx006ScrumState.h"
#include "TresBTDecorator_e_ex006_ScrumStateCheck.generated.h"

UCLASS()
class UTresBTDecorator_e_ex006_ScrumStateCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresEnemyEx006ScrumState m_ScrumStateCheck;
    
    UTresBTDecorator_e_ex006_ScrumStateCheck();
};

