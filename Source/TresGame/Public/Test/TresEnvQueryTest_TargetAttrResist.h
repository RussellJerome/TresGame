#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "TresEnvQueryTest_TargetAttrResist.generated.h"

class UEnvQueryContext;

UCLASS()
class UTresEnvQueryTest_TargetAttrResist : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Target;
    
    UTresEnvQueryTest_TargetAttrResist();
};

