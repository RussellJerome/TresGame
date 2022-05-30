#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "TresEnvQueryTest_AttackDistance.generated.h"

UCLASS()
class UTresEnvQueryTest_AttackDistance : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue ExecutableAttacksOnly;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue DistanceForward;
    
    UTresEnvQueryTest_AttackDistance();
};

