#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresRandomEntryProbabilitySource.h"
#include "TresBTDecorator_RandomEntry.generated.h"

UCLASS()
class UTresBTDecorator_RandomEntry : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresRandomEntryProbabilitySource::Type> m_ValueType;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint8 m_bUseBlackboard: 1;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint8 m_bUseLiteral: 1;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKey;
    
    UPROPERTY(EditAnywhere)
    float m_LiteralValue;
    
    UTresBTDecorator_RandomEntry();
};

