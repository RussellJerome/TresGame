#pragma once
#include "CoreMinimal.h"
#include "TresBTDecorator_CanActionAbortTiming.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTDecorator_CanActionAbortTimingNumber.generated.h"

UCLASS()
class UTresBTDecorator_CanActionAbortTimingNumber : public UTresBTDecorator_CanActionAbortTiming {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<int32> m_NumberList;
    
    UPROPERTY(EditAnywhere)
    TArray<FBlackboardKeySelector> m_BlackboardKeyNumberList;
    
    UTresBTDecorator_CanActionAbortTimingNumber();
};

