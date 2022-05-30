#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTService_IsInViewportCounter.generated.h"

UCLASS()
class UTresBTService_IsInViewportCounter : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Target;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKeyCounter;
    
    UPROPERTY(EditAnywhere)
    float m_Interval;
    
    UTresBTService_IsInViewportCounter();
};

