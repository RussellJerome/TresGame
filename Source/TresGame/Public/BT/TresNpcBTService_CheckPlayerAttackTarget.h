#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "TresNpcBTService_CheckPlayerAttackTarget.generated.h"

UCLASS()
class UTresNpcBTService_CheckPlayerAttackTarget : public UBTService_BlackboardBase {
    GENERATED_BODY()
public:
    UTresNpcBTService_CheckPlayerAttackTarget();
};

