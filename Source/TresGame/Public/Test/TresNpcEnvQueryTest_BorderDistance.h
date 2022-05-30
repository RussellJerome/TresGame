#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "TresNpcEnvQueryTest_BorderDistance.generated.h"

class UEnvQueryContext;

UCLASS()
class UTresNpcEnvQueryTest_BorderDistance : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> m_Context;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_Border;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue m_bDist2D;
    
    UTresNpcEnvQueryTest_BorderDistance();
};

