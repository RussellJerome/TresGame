#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_e_ex036OverrideSwingCheck.generated.h"

UCLASS()
class UTresBTDecorator_e_ex036OverrideSwingCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetDestination;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector RelayPoint;
    
    UPROPERTY(EditAnywhere)
    bool m_bSwingRight;
    
    UPROPERTY(EditAnywhere)
    float m_AcceptRadius;
    
    UTresBTDecorator_e_ex036OverrideSwingCheck();
};

