#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "TresEnvQueryTest_NavigationRaycast.generated.h"

class UEnvQueryContext;
class UNavigationQueryFilter;

UCLASS()
class UTresEnvQueryTest_NavigationRaycast : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue NavgationRaycastFromContext;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    
    UTresEnvQueryTest_NavigationRaycast();
};

