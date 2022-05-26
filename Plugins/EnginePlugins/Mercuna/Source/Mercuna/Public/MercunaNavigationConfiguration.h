#pragma once
#include "CoreMinimal.h"
#include "MercunaNavigationConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FMercunaNavigationConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MaxPitch;
    
    UPROPERTY(EditAnywhere)
    float MaxRoll;
    
    UPROPERTY(EditAnywhere)
    bool MoveOnlyInLookDirection;
    
    UPROPERTY(EditAnywhere)
    bool StopAtDestination;
    
    MERCUNA_API FMercunaNavigationConfiguration();
};

