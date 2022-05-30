#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "TresBTDecorator_ActorValueCheckBase.generated.h"

UCLASS(Abstract)
class UTresBTDecorator_ActorValueCheckBase : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_BBActorName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EArithmeticKeyOperation::Type> m_Operation;
    
    UPROPERTY(VisibleDefaultsOnly)
    bool m_bUseBB;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_CheckValueBBKey;
    
    UPROPERTY(EditAnywhere)
    float m_CheckValue;
    
    UTresBTDecorator_ActorValueCheckBase();
};

