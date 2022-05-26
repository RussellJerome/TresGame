#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h"
#include "DataProviders/AIDataProvider.h"
#include "TresNpcEnvQueryGenerator_SideMove.generated.h"

UCLASS(EditInlineNew)
class UTresNpcEnvQueryGenerator_SideMove : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue Radius;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue AdjustValue;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue ForwardPowerRate;
    
    UTresNpcEnvQueryGenerator_SideMove();
};

