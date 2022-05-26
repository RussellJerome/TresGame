#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "TresEnvQueryTest_Targeting.generated.h"

class UEnvQueryContext;

UCLASS()
class UTresEnvQueryTest_Targeting : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly)
    bool bPlayerTargetingCheck;
    
    UTresEnvQueryTest_Targeting();
};

