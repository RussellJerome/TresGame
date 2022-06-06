#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresNpcBTDecorator_IsAttackedByEnemies.generated.h"

UCLASS()
class UTresNpcBTDecorator_IsAttackedByEnemies : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Source;
    
    UTresNpcBTDecorator_IsAttackedByEnemies();
};

