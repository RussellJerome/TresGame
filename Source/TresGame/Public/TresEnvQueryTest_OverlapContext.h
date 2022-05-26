#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "TresEnvQueryTest_OverlapContext.generated.h"

class UEnvQueryContext;

UCLASS()
class UTresEnvQueryTest_OverlapContext : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UTresEnvQueryTest_OverlapContext();
};

