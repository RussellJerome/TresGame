#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "TresNpcEnvQueryTest_CameraAngle.generated.h"

UCLASS()
class UTresNpcEnvQueryTest_CameraAngle : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_AngleYaw;
    
    UTresNpcEnvQueryTest_CameraAngle();
};

