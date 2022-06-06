#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "TresEnvQueryTest_HateToPlayer.generated.h"

class UEnvQueryContext;

UCLASS()
class UTresEnvQueryTest_HateToPlayer : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> HateFrom;
    
    UTresEnvQueryTest_HateToPlayer();
};

