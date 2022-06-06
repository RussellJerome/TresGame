#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "DataProviders/AIDataProvider.h"
#include "EEnvGeneratorOnRingRadiusMode.h"
#include "TresEnvQueryGenerator_OnRing.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class UTresEnvQueryGenerator_OnRing : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue MinRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue MaxRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue MinRadiusItemSpacing;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue MaxRadiusItemSpacing;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxRadiusItemSpacingRatio;
    
    UPROPERTY(EditDefaultsOnly)
    FEnvDirection ArcDirection;
    
    UPROPERTY(EditDefaultsOnly)
    bool bArcDirection3D;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue Angle;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> CircleCenter;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvGeneratorOnRingRadiusMode::Type> RadiusMode;
    
    UPROPERTY()
    FAIDataProviderBoolValue AddContextBoundsToRadius;
    
    UPROPERTY()
    uint8 bDefineArc: 1;
    
    UPROPERTY()
    uint8 bDefineMaxRadius: 1;
    
    UPROPERTY()
    uint8 bDefineMaxRadiusItemSpacing: 1;
    
    UTresEnvQueryGenerator_OnRing();
};

