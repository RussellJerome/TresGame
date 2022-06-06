#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "TresEnvQueryGenerator_Static.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class UTresEnvQueryGenerator_Static : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> center;
    
    UPROPERTY(EditAnywhere)
    FName TagName;
    
    UTresEnvQueryGenerator_Static();
};

