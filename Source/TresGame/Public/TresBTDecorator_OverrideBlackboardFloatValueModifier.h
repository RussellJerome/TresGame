#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresDecoratorValueModifierMethod.h"
#include "TresBTDecorator_OverrideBlackboardFloatValueModifier.generated.h"

UCLASS()
class UTresBTDecorator_OverrideBlackboardFloatValueModifier : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresDecoratorValueModifierMethod::Type> m_ValueModifierType;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKey;
    
    UPROPERTY(EditAnywhere)
    float m_Value;
    
    UTresBTDecorator_OverrideBlackboardFloatValueModifier();
};

