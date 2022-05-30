#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "TresEnvQueryTest_AmountDamageTaken.generated.h"

UCLASS()
class UTresEnvQueryTest_AmountDamageTaken : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue GetAmountDamage_Seconds;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue Percent;
    
    UTresEnvQueryTest_AmountDamageTaken();
};

