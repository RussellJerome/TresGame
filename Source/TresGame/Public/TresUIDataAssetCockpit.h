#pragma once
#include "CoreMinimal.h"
#include "TresUIDataAsset.h"
#include "TresUIDataAssetCockpit.generated.h"

class USwfMovie;
class UObject;

UCLASS()
class UTresUIDataAssetCockpit : public UTresUIDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetHudTarget;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetHudStatus;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetHudCommand;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetHudLeft;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetHudRight;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetHudOperation;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetHudRailScope;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetCenterInformation;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetNaviMapGra;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<UObject*> CockpitSwfRefAssets;
    
    UTresUIDataAssetCockpit();
};

