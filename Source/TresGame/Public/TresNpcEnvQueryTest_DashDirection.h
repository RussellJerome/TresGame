#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "TresNpcEnvQueryTest_DashDirection.generated.h"

class UEnvQueryContext;

UCLASS()
class UTresNpcEnvQueryTest_DashDirection : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> m_TargetContext;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_Angle;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_RandomAngleLimit;
    
    UTresNpcEnvQueryTest_DashDirection();
};

