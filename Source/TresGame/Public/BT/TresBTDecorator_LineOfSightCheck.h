#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_LineOfSightCheck.generated.h"

UCLASS()
class UTresBTDecorator_LineOfSightCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Source;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Target;
    
    UPROPERTY(EditAnywhere)
    bool m_bEnableSourceHead;
    
    UPROPERTY(EditAnywhere)
    bool m_bEnableTargetHead;
    
    UTresBTDecorator_LineOfSightCheck();
};

