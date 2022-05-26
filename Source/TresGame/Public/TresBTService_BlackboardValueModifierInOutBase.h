#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "TresBTService_BlackboardValueModifierInOutBase.generated.h"

UCLASS(Abstract)
class UTresBTService_BlackboardValueModifierInOutBase : public UBTService {
    GENERATED_BODY()
public:
    UTresBTService_BlackboardValueModifierInOutBase();
};

