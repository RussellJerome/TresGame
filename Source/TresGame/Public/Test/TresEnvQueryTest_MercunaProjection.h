#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "TresEnvQueryTest_MercunaProjection.generated.h"

UCLASS()
class UTresEnvQueryTest_MercunaProjection : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue DownHeight;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue UpHeight;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue OffsetZ;
    
    UTresEnvQueryTest_MercunaProjection();
};

