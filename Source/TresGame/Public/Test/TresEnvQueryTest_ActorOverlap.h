#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "TresEnvQueryTest_ActorOverlap.generated.h"

class UEnvQueryContext;

UCLASS()
class UTresEnvQueryTest_ActorOverlap : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAddQuerierRadius;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseGimmickObstacle;
    
    UTresEnvQueryTest_ActorOverlap();
};

