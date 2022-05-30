#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "TresEnvQueryTest_HP.generated.h"

UCLASS()
class UTresEnvQueryTest_HP : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue GetHP_AsPercentage;
    
    UTresEnvQueryTest_HP();
};

