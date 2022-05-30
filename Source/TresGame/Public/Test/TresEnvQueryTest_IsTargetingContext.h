#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "TresEnvQueryTest_IsTargetingContext.generated.h"

class UEnvQueryContext;

UCLASS()
class UTresEnvQueryTest_IsTargetingContext : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UTresEnvQueryTest_IsTargetingContext();
};

