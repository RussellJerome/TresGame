#pragma once
#include "CoreMinimal.h"
#include "TresUIDataAsset.h"
#include "TresUIDataAssetGeneral.generated.h"

class USwfMovie;
class UObject;

UCLASS()
class UTresUIDataAssetGeneral : public UTresUIDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetCursor;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetScreenFilter;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetWipe;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetAutoSave;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetNowLoading;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetVideoPlayer;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetHudCamera;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetPause;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetCampMenu;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetMobilePortal;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetMobileAlbum;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetGameHelp;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetSaveLoad;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetSubtitle;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetCutsceneText;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetDialog;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetMessage;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetCenterInformation;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetMultiItemGet;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetKeyItem;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetMapName;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetInstallMessage;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<UObject*> GeneralSwfRefAssets;
    
    UTresUIDataAssetGeneral();
};

