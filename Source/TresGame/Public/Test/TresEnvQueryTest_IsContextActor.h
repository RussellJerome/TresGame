#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "TresEnvQueryTest_IsContextActor.generated.h"

class UEnvQueryContext;

UCLASS()
class UTresEnvQueryTest_IsContextActor : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UTresEnvQueryTest_IsContextActor();
};

