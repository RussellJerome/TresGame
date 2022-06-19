#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresDecoratorVectorValueModifierMethod.h"
#include "UObject/NoExportTypes.h"
#include "TresBTDecorator_OverrideBlackboardVectorValueModifier.generated.h"

UCLASS()
class UTresBTDecorator_OverrideBlackboardVectorValueModifier : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresDecoratorVectorValueModifierMethod::Type> m_ValueModifierType;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKey;
    
    UPROPERTY(EditAnywhere)
    FVector m_Value;
    
    UPROPERTY(EditAnywhere)
    uint32 m_bUseBlackboard: 1;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKeyValueB;
    
    UTresBTDecorator_OverrideBlackboardVectorValueModifier();
};

