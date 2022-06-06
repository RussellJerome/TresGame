#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresUIDataAsset.h"
#include "TresUIDataAssetStatus.generated.h"

class USwfMovie;
class UObject;
class UTresUIHudCommandDataAsset;
class UTexture;
class ATresUIActor;

UCLASS()
class UTresUIDataAssetStatus : public UTresUIDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* FaceSwfAsset;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<UObject*> FaceSwfRefAssets;
    
    UPROPERTY(EditDefaultsOnly)
    bool EnableWearForm;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresUIActor> CampTopUIActor;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* MenuFaceIcon;
    
    UPROPERTY(EditDefaultsOnly)
    UTresUIHudCommandDataAsset* HudCommandDataAsset;
    
    UTresUIDataAssetStatus();
};

