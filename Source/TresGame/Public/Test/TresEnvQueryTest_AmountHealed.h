#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "TresEnvQueryTest_AmountHealed.generated.h"

UCLASS()
class UTresEnvQueryTest_AmountHealed : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue GetAmountHealed_Seconds;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue Percent;
    
    UTresEnvQueryTest_AmountHealed();
};

