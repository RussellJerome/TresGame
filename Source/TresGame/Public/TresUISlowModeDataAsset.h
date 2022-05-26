#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUIDoFParams.h"
#include "TresUISlowModeDataAsset.generated.h"

UCLASS()
class UTresUISlowModeDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTresUIDoFParams DoFParams;
    
    UPROPERTY(EditDefaultsOnly)
    float DoFTransitionTime;
    
    UPROPERTY(EditDefaultsOnly)
    float SlowRate;
    
    UTresUISlowModeDataAsset();
};

