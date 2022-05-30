#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "TresEnvQueryTest_DirectPath.generated.h"

class UEnvQueryContext;

UCLASS()
class UTresEnvQueryTest_DirectPath : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue PathFromContext;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue FailedItemsRaycast;
    
    UTresEnvQueryTest_DirectPath();
};

