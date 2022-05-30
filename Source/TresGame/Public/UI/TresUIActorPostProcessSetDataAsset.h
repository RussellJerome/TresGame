#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUIActorPostProcessSetDataAsset.generated.h"

class UTexture;
class UTextureCube;

UCLASS()
class UTresUIActorPostProcessSetDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float FilmContrast;
    
    UPROPERTY(EditDefaultsOnly)
    float FilmHealAmount;
    
    UPROPERTY(EditDefaultsOnly)
    float FilmDynamicRange;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* ColorGradingLUT;
    
    UPROPERTY(EditDefaultsOnly)
    float AmbientCubemapIntensity;
    
    UPROPERTY(EditDefaultsOnly)
    UTextureCube* AmbientCubemap;
    
    UPROPERTY(EditDefaultsOnly)
    float AutoExposureBias;
    
    UTresUIActorPostProcessSetDataAsset();
};

