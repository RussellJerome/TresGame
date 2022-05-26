#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ETresFNpcAICombiRole.h"
#include "TresNpcBTDecorator_IsCombiRole.generated.h"

UCLASS()
class UTresNpcBTDecorator_IsCombiRole : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Source;
    
    UPROPERTY(EditAnywhere)
    ETresFNpcAICombiRole m_Role;
    
    UTresNpcBTDecorator_IsCombiRole();
};

