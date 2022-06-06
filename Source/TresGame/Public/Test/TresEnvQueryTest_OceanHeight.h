#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "TresEnvQueryTest_OceanHeight.generated.h"

UCLASS()
class UTresEnvQueryTest_OceanHeight : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_AmplitudeOffset;
    
    UTresEnvQueryTest_OceanHeight();
};

