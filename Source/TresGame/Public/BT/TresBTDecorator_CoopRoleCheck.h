#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresCoopRole.h"
#include "TresBTDecorator_CoopRoleCheck.generated.h"

UCLASS()
class UTresBTDecorator_CoopRoleCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresCoopRole m_CoopRole;
    
    UTresBTDecorator_CoopRoleCheck();
};

