#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUIBlurParams.h"
#include "TresUIFlowScopeDataAsset.generated.h"

class UTexture;

UCLASS()
class UTresUIFlowScopeDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTresUIBlurParams InitialUIBlurParams;
    
    UPROPERTY(EditDefaultsOnly)
    FTresUIBlurParams InUIBlurParams;
    
    UPROPERTY(EditDefaultsOnly)
    float InUIBlurTime;
    
    UPROPERTY(EditDefaultsOnly)
    FTresUIBlurParams OutUIBlurParams;
    
    UPROPERTY(EditDefaultsOnly)
    float OutUIBlurTime;
    
    UPROPERTY(EditDefaultsOnly)
    FTresUIBlurParams SelectUIBlurParams;
    
    UPROPERTY(EditDefaultsOnly)
    float SelectUIBlurTime;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* UIBlurMaskTexture;
    
    UTresUIFlowScopeDataAsset();
};

