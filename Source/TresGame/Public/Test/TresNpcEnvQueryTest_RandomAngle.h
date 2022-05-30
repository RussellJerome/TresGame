#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "TresNpcEnvQueryTest_RandomAngle.generated.h"

UCLASS()
class UTresNpcEnvQueryTest_RandomAngle : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_AngleYaw;
    
    UTresNpcEnvQueryTest_RandomAngle();
};

