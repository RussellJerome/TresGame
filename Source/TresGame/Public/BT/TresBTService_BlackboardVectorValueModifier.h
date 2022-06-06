#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "ETresValueModifierMethod.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresBTService_BlackboardVectorValueModifier.generated.h"

UCLASS()
class UTresBTService_BlackboardVectorValueModifier : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKeyValue;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresValueModifierMethod::Type> m_ValueModifierType;
    
    UPROPERTY(EditAnywhere)
    FVector m_Value;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bUseBlackboard: 1;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKeyValueB;
    
    UPROPERTY(EditAnywhere)
    float m_Interval;
    
    UTresBTService_BlackboardVectorValueModifier();
};

