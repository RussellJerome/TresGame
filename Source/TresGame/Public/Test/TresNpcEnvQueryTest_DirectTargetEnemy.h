#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ETresEnemyUniqueID.h"
#include "TresNpcEnvQueryTest_DirectTargetEnemy.generated.h"

UCLASS()
class UTresNpcEnvQueryTest_DirectTargetEnemy : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresEnemyUniqueID m_EnemyUID;
    
    UTresNpcEnvQueryTest_DirectTargetEnemy();
};

