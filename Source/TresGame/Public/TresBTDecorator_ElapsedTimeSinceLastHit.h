#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "TresBTDecorator_ElapsedTimeSinceLastHit.generated.h"

class UTresActionDefinitionBase;

UCLASS()
class UTresBTDecorator_ElapsedTimeSinceLastHit : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EArithmeticKeyOperation::Type> Operation;
    
    UPROPERTY(EditAnywhere)
    float m_Value;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresActionDefinitionBase> ActionDefinition;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FBlackboardKeySelector m_BlackboardKeyLastHitAttackDefinition;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FBlackboardKeySelector m_BlackboardKeyLastHitTimestamp;
    
    UTresBTDecorator_ElapsedTimeSinceLastHit();
};

