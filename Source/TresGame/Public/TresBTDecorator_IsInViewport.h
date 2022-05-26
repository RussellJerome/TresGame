#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_IsInViewport.generated.h"

UCLASS()
class UTresBTDecorator_IsInViewport : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Target;
    
    UTresBTDecorator_IsInViewport();
};

