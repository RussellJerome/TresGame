#pragma once
#include "CoreMinimal.h"
#include "TresUIDataAsset.h"
#include "TresUIDataAssetRemy.generated.h"

class USoundBase;
class USwfMovie;
class UTexture;
class UObject;

UCLASS()
class UTresUIDataAssetRemy : public UTresUIDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetHudRemy;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfAssetMenuRemy;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* NotClearedIcon;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<UObject*> RemySwfRefAssets;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* MenuChangeSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* CookAmountChangeSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* CommonRankUpSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* FinalRankUpSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* GetCuisineSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* UnlockSpecialMenuSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* ExcellentSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* GoodSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* FaileSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* MillGreatSuccessSE;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* MillSuccessSE;
    
    UTresUIDataAssetRemy();
};

