#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "TresEnvQueryTest_PositionalRankingBoundsSizeGrouping.generated.h"

class UEnvQueryContext;

UCLASS()
class UTresEnvQueryTest_PositionalRankingBoundsSizeGrouping : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> HighPriorityContext;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_Priority;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_MinusSize;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_PlusSize;
    
    UTresEnvQueryTest_PositionalRankingBoundsSizeGrouping();
};

