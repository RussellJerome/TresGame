#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "TresEnvQueryTest_TargetingBoundsSizeGrouping.generated.h"

class UEnvQueryContext;

UCLASS()
class UTresEnvQueryTest_TargetingBoundsSizeGrouping : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_MinusSize;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_PlusSize;
    
    UTresEnvQueryTest_TargetingBoundsSizeGrouping();
};

