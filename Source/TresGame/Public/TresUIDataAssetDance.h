#pragma once
#include "CoreMinimal.h"
#include "TresUIDataAsset.h"
#include "TresUIDataAssetDance.generated.h"

class USoundBase;
class USwfMovie;
class UObject;

UCLASS()
class UTresUIDataAssetDance : public UTresUIDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* RaSwfAsset;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<UObject*> RaSwfRefAssets;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* ResultScoreSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* ResultRankSE;
    
    UTresUIDataAssetDance();
};

