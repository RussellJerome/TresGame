#pragma once
#include "CoreMinimal.h"
#include "TresUIDataAsset.h"
#include "TresUIDataAssetBaymax.generated.h"

class USoundBase;
class USwfMovie;
class UObject;
class UTextureRenderTarget2D;

UCLASS()
class UTresUIDataAssetBaymax : public UTresUIDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* BxSwfAsset;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<UObject*> BxSwfRefAssets;
    
    UPROPERTY(EditDefaultsOnly)
    UTextureRenderTarget2D* BxTextureRenderTarget;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* ReadySE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* CountDownSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* GameStartSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* FinishSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* ResultOpenSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* ResultCloseSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* ResultPointRollSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* ResultNewRecordSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* ResultRankSE;
    
    UTresUIDataAssetBaymax();
};

