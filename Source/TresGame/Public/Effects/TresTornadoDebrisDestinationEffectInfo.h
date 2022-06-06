#pragma once
#include "CoreMinimal.h"
#include "TresTornadoDebrisDestinationEffectInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresTornadoDebrisDestinationEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float fDisableDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float fScale;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDetachOnDisappear;
    
    TRESGAME_API FTresTornadoDebrisDestinationEffectInfo();
};

