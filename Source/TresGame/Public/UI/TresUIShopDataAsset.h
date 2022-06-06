#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUIShopInfo.h"
#include "TresUIShopDataAsset.generated.h"

class UTresUIGumiPartsDataAsset;
class UTextureRenderTarget2D;
class USwfMovie;

UCLASS()
class UTresUIShopDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UTextureRenderTarget2D* ShopStaffRenderTargetTexture;
    
    UPROPERTY(EditDefaultsOnly)
    FTresUIShopInfo ShopInfos[4];
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* ShopSwfMovieAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UTresUIGumiPartsDataAsset* GumiPartsData;
    
    UTresUIShopDataAsset();
};

