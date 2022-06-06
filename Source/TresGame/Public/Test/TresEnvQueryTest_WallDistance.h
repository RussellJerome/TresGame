#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "TresEnvQueryTest_WallDistance.generated.h"

class UNavigationQueryFilter;

UCLASS()
class UTresEnvQueryTest_WallDistance : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float MaxDistance;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UNavigationQueryFilter> NavigationFilter;
    
    UTresEnvQueryTest_WallDistance();
};

