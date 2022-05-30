#pragma once
#include "CoreMinimal.h"
#include "TresUIDataAsset.h"
#include "TresUIDataAssetOlaf.generated.h"

class USwfMovie;
class UObject;

UCLASS()
class UTresUIDataAssetOlaf : public UTresUIDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetHudOlaf;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<UObject*> OlafSwfRefAssets;
    
    UTresUIDataAssetOlaf();
};

