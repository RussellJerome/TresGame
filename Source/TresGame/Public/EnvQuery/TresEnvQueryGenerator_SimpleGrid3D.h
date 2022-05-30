#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h"
#include "DataProviders/AIDataProvider.h"
#include "TresEnvQueryGenerator_SimpleGrid3D.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class UTresEnvQueryGenerator_SimpleGrid3D : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue GridXYSize;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue SpaceBetweenXY;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue SpaceBetweenZ;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue MinHeight;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue MaxHeight;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> GenerateAround;
    
    UTresEnvQueryGenerator_SimpleGrid3D();
};

