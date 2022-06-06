#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "TresEnvQueryTest_IsSwimmingUnderWater.generated.h"

class UEnvQueryContext;

UCLASS()
class UTresEnvQueryTest_IsSwimmingUnderWater : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bQuerierCheck;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UTresEnvQueryTest_IsSwimmingUnderWater();
};

