#pragma once
#include "CoreMinimal.h"
#include "TresEnvQueryGenerator_OnRing.h"
#include "DataProviders/AIDataProvider.h"
#include "TresEnvQueryGenerator_OnRing3D.generated.h"

UCLASS(EditInlineNew)
class UTresEnvQueryGenerator_OnRing3D : public UTresEnvQueryGenerator_OnRing {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue ItemSpacingZ;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue MinHeight;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue MaxHeight;
    
    UTresEnvQueryGenerator_OnRing3D();
};

