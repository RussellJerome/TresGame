#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryGenerator_Mercuna_3DRing.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class MERCUNA_API UEnvQueryGenerator_Mercuna_3DRing : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue InnerRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue OuterRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue NumberOfRings;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue PointsPerRing;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue MinHeight;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue MaxHeight;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue NumberOfLayers;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> center;
    
    UEnvQueryGenerator_Mercuna_3DRing();
};

