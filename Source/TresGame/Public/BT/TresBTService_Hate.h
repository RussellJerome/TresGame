#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "ETresHateModifier.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ETresValueModifierMethod.h"
#include "TresBTService_Hate.generated.h"

UCLASS()
class UTresBTService_Hate : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresHateModifier::Type> m_HateModifier;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresValueModifierMethod::Type> m_ValueModifierType;
    
    UPROPERTY(EditAnywhere)
    float m_Value;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint32 m_bUseBlackboard: 1;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_TargetActor;
    
    UTresBTService_Hate();
};

