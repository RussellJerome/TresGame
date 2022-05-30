#pragma once
#include "CoreMinimal.h"
#include "TresEnvQueryGenerator_OnRing.h"
#include "DataProviders/AIDataProvider.h"
#include "TresEnvQueryGenerator_OnRingSurface.generated.h"

UCLASS(EditInlineNew)
class UTresEnvQueryGenerator_OnRingSurface : public UTresEnvQueryGenerator_OnRing {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue NumSamples;
    
    UPROPERTY(EditDefaultsOnly)
    bool bSurfaceRefBodyColls;
    
    UTresEnvQueryGenerator_OnRingSurface();
};

