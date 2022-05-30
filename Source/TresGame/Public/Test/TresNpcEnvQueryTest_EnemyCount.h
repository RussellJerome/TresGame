#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "TresNpcEnvQueryTest_EnemyCount.generated.h"

class UEnvQueryContext;

UCLASS()
class UTresNpcEnvQueryTest_EnemyCount : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> IgnoreContext;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_Radius;
    
    UTresNpcEnvQueryTest_EnemyCount();
};

