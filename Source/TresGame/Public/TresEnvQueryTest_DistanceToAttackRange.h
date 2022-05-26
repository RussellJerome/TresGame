#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "TresEnvQueryTest_DistanceToAttackRange.generated.h"

class UEnvQueryContext;

UCLASS()
class UTresEnvQueryTest_DistanceToAttackRange : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Target;
    
    UTresEnvQueryTest_DistanceToAttackRange();
};

