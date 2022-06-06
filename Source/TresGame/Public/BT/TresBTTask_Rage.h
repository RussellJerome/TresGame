#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ETresValueModifierMethod.h"
#include "ETresRageSource.h"
#include "TresBTTask_Rage.generated.h"

UCLASS()
class UTresBTTask_Rage : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresValueModifierMethod::Type> m_ValueModifierType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresRageSource::Type> m_ValueType;
    
    UPROPERTY(EditAnywhere)
    float m_Value;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardValue;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint8 m_bUseLiteral: 1;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint8 m_bUseBlackboard: 1;
    
    UTresBTTask_Rage();
};

