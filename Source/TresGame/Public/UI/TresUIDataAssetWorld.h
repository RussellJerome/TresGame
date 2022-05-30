#pragma once
#include "CoreMinimal.h"
#include "TresUIDataAsset.h"
#include "TresUIDataAssetWorld.generated.h"

class USwfMovie;
class UObject;
class UTexture;

UCLASS()
class UTresUIDataAssetWorld : public UTresUIDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* WipeSwfAsset;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<UObject*> WipeSwfRefAssets;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* HudCommandSwfAsset;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<UObject*> HudCommandSwfRefAssets;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* HudStatusSwfAsset;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<UObject*> HudStatusSwfRefAssets;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* MenuWorldTitleIcon;
    
    UPROPERTY(EditDefaultsOnly)
    FString CommandAttackTextNamespace;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UTresUIDataAsset*> OptionalUIDataAssets;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FString> ExtraHudCommandMapNames;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* ExtraHudCommandSwfAsset;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<UObject*> ExtraHudCommandSwfRefAssets;
    
    UPROPERTY(EditDefaultsOnly)
    FString ExtraCommandAttackTextNamespace;
    
    UTresUIDataAssetWorld();
};

