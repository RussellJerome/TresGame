#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "ETresValueModifierMethod.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTService_BlackboardFloatValueModifier.generated.h"

UCLASS()
class UTresBTService_BlackboardFloatValueModifier : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKeyValue;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresValueModifierMethod::Type> m_ValueModifierType;
    
    UPROPERTY(EditAnywhere)
    float m_Value;
    
    UPROPERTY(EditAnywhere)
    float m_ValueRandomDeviation;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bUseBlackboard: 1;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKeyValueB;
    
    UPROPERTY(EditAnywhere)
    float m_Interval;
    
    UTresBTService_BlackboardFloatValueModifier();
};

