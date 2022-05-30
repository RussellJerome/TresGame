#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "TresEnvQueryTest_DistanceToPath.generated.h"

class UEnvQueryContext;
class UNavigationQueryFilter;

UCLASS()
class UTresEnvQueryTest_DistanceToPath : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> PathStart;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> PathEnd;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    
    UTresEnvQueryTest_DistanceToPath();
};

