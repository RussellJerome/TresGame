#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ETresHateModifier.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ETresValueModifierMethod.h"
#include "TresBTTask_Hate.generated.h"

UCLASS()
class UTresBTTask_Hate : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresHateModifier::Type> m_HateModifier;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresValueModifierMethod::Type> m_ValueModifierType;
    
    UPROPERTY(EditAnywhere)
    float m_Value;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint8 m_bUseBlackboard: 1;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_TargetActor;
    
    UTresBTTask_Hate();
};

