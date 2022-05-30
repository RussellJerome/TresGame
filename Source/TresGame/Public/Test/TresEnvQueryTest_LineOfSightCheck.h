#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "TresEnvQueryTest_LineOfSightCheck.generated.h"

class UEnvQueryContext;

UCLASS()
class UTresEnvQueryTest_LineOfSightCheck : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> TargetActorContext;
    
    UTresEnvQueryTest_LineOfSightCheck();
};

