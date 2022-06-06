#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EMercunaPointDistribution.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryGenerator_Mercuna_Sphere.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class MERCUNA_API UEnvQueryGenerator_Mercuna_Sphere : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue InnerRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue OuterRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue NumberOfShells;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue PointsPerShell;
    
    UPROPERTY(EditDefaultsOnly)
    EMercunaPointDistribution Distribution;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> center;
    
    UEnvQueryGenerator_Mercuna_Sphere();
};

