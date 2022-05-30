#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_RunEQS.h"
#include "TresBTService_TargetSelection.generated.h"

UCLASS()
class UTresBTService_TargetSelection : public UBTService_RunEQS {
    GENERATED_BODY()
public:
    UTresBTService_TargetSelection();
};

