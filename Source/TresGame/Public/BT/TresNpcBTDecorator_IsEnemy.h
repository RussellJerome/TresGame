#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ETresEnemyUniqueID.h"
#include "TresNpcBTDecorator_IsEnemy.generated.h"

UCLASS()
class UTresNpcBTDecorator_IsEnemy : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Source;
    
    UPROPERTY(EditAnywhere)
    TArray<ETresEnemyUniqueID> m_EnemiesUID;
    
    UTresNpcBTDecorator_IsEnemy();
};

