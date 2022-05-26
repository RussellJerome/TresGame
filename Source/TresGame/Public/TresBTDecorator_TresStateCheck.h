#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresStateID.h"
#include "TresBTDecorator_TresStateCheck.generated.h"

UCLASS()
class UTresBTDecorator_TresStateCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Source;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ETresStateID>> m_States;
    
    UTresBTDecorator_TresStateCheck();
};

