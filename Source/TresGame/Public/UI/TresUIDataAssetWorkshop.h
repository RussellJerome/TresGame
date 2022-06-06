#pragma once
#include "CoreMinimal.h"
#include "TresUIDataAsset.h"
#include "TresUIDataAssetWorkshop.generated.h"

class USwfMovie;
class UObject;

UCLASS()
class UTresUIDataAssetWorkshop : public UTresUIDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetHudWorkshop;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<UObject*> HudWorkshopSwfRefAssets;
    
    UTresUIDataAssetWorkshop();
};

