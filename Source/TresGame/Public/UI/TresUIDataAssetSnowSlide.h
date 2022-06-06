#pragma once
#include "CoreMinimal.h"
#include "TresUIDataAsset.h"
#include "TresUIDataAssetSnowSlide.generated.h"

class USoundBase;
class USwfMovie;
class UObject;

UCLASS()
class UTresUIDataAssetSnowSlide : public UTresUIDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetHudSnowSlide;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<UObject*> SnowSlideSwfRefAssets;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* ResultNewRecordSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* ResultRollSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* ResultRankSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* ResultTreasureCompleteSE;
    
    UTresUIDataAssetSnowSlide();
};

