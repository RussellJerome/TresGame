#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUIDataAsset.generated.h"

class USwfMovie;
class UObject;

UCLASS()
class UTresUIDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<USwfMovie*> SwfAssets;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<UObject*> SwfRefAssets;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UObject*> Assets;
    
    UTresUIDataAsset();
};

