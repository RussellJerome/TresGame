#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "TresUIMobilePortalDataAsset.generated.h"

class UDataTable;
class UTextureRenderTarget2D;
class ATresUIActor;
class UTresUIMobileDictionaryDataAsset;
class USwfMovie;
class USoundBase;

UCLASS()
class UTresUIMobilePortalDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UTextureRenderTarget2D* JiminyRenderTargetTexture;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresUIActor> JiminyActor;
    
    UPROPERTY(EditDefaultsOnly)
    UTresUIMobileDictionaryDataAsset* DictionaryData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* KeywordGlossaryData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* AnsemCodeData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* StoryData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* LSIGameData;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfMovieAssetLSIButtonSet;
    
    UPROPERTY(EditDefaultsOnly)
    FName LSIGamePlayRewardItemName;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* LSIMenuBGM;
    
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* SwfMovieAssets[12];
    
    UTresUIMobilePortalDataAsset();
};

