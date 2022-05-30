#pragma once
#include "CoreMinimal.h"
#include "TresEnvQueryGenerator_OnRing3D.h"
#include "DataProviders/AIDataProvider.h"
#include "TresEnvQueryGenerator_OnRing3DDirectionAddOffset.generated.h"

UCLASS(EditInlineNew)
class UTresEnvQueryGenerator_OnRing3DDirectionAddOffset : public UTresEnvQueryGenerator_OnRing3D {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue DirectionAddOffsetX;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue DirectionAddOffsetY;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue DirectionAddOffsetZ;
    
    UTresEnvQueryGenerator_OnRing3DDirectionAddOffset();
};

