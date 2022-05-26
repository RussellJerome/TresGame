#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresCoopRunningStatus.h"
#include "TresBTDecorator_CoopStatusCheck.generated.h"

UCLASS()
class UTresBTDecorator_CoopStatusCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresCoopRunningStatus m_CoopStatus;
    
    UPROPERTY(EditAnywhere)
    bool bReferenceFromTeam;
    
    UTresBTDecorator_CoopStatusCheck();
};

