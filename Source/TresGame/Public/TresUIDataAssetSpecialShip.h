#pragma once
#include "CoreMinimal.h"
#include "TresUIDataAsset.h"
#include "TresUIDataAssetSpecialShip.generated.h"

class USoundBase;
class USwfMovie;
class UObject;
class UDataTable;

UCLASS()
class UTresUIDataAssetSpecialShip : public UTresUIDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* CaSwfAsset;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<UObject*> CaSwfRefAssets;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* CaChartSwfAsset;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<UObject*> CaChartSwfRefAssets;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* NauticalChartData;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* NauticalChartOpenSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* PowerUpWindowOpenSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* PowerUpWindowCloseSE;
    
    UTresUIDataAssetSpecialShip();
};

