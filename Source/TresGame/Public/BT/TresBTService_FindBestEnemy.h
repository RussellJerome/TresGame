#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "TresBTService_FindBestEnemy.generated.h"

UCLASS()
class UTresBTService_FindBestEnemy : public UBTService_BlackboardBase {
    GENERATED_BODY()
public:
    UTresBTService_FindBestEnemy();
};

