#pragma once
#include "CoreMinimal.h"
#include "TresUIDataAsset.h"
#include "TresUIDataAssetGigasGame.generated.h"

class USoundBase;
class USwfMovie;
class UObject;

UCLASS()
class UTresUIDataAssetGigasGame : public UTresUIDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetHudFront;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetHudBack;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetMenu;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* ReadySE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* StartSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* ResultPointRollSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* ResultNewRecordSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* ResultRankSE;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<UObject*> GigasGameSwfRefAssets;
    
    UTresUIDataAssetGigasGame();
};

