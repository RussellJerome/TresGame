#pragma once
#include "CoreMinimal.h"
#include "TresBTTask_BlackboardValueModifierBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTTask_BlackboardFloatValueModifier.generated.h"

UCLASS()
class UTresBTTask_BlackboardFloatValueModifier : public UTresBTTask_BlackboardValueModifierBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 m_bUseBlackboard: 1;
    
    UPROPERTY(EditAnywhere)
    float m_Value;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKeyValueB;
    
    UTresBTTask_BlackboardFloatValueModifier();
};

