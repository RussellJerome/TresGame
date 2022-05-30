#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h"
#include "TresEnvQueryGenerator_Context.generated.h"

class UEnvQueryContext;
class UEnvQueryItemType;

UCLASS(EditInlineNew)
class UTresEnvQueryGenerator_Context : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryItemType> ContextItemType;
    
    UTresEnvQueryGenerator_Context();
};

