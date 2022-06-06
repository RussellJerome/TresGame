#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "GenericTeamAgentInterface.h"
#include "TresBTDecorator_TeamMemberCount.generated.h"

UCLASS()
class UTresBTDecorator_TeamMemberCount : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETeamAttitude::Type> m_team;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EArithmeticKeyOperation::Type> ArithmeticOperation;
    
    UPROPERTY(EditAnywhere)
    int32 m_memberCount;
    
    UTresBTDecorator_TeamMemberCount();
};

