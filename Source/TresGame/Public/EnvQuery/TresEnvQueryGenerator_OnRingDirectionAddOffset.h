#pragma once
#include "CoreMinimal.h"
#include "TresEnvQueryGenerator_OnRing.h"
#include "DataProviders/AIDataProvider.h"
#include "TresEnvQueryGenerator_OnRingDirectionAddOffset.generated.h"

UCLASS(EditInlineNew)
class UTresEnvQueryGenerator_OnRingDirectionAddOffset : public UTresEnvQueryGenerator_OnRing {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue DirectionAddOffsetX;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue DirectionAddOffsetY;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue DirectionAddOffsetZ;
    
    UTresEnvQueryGenerator_OnRingDirectionAddOffset();
};

