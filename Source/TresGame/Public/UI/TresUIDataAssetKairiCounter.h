#pragma once
#include "CoreMinimal.h"
#include "TresUIDataAsset.h"
#include "TresUIDataAssetKairiCounter.generated.h"

class USwfMovie;
class UObject;

UCLASS()
class UTresUIDataAssetKairiCounter : public UTresUIDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetHudKairiCounter;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<UObject*> KairiCounterSwfRefAssets;
    
    UTresUIDataAssetKairiCounter();
};

