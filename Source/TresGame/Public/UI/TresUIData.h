#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ETresGameHelpCategory.h"
#include "TresUIData.generated.h"

class UDataTable;
class UTextureRenderTarget2D;
class UTresUIDataAssetGeneral;
class UTresUIDataAssetCockpit;
class UTresUIFlowScopeDataAsset;
class UTresUISlowModeDataAsset;
class UTresUIShopDataAsset;
class UTresUIWorldIconNameDataAsset;
class UTresUICustomizeDataAsset;
class UTresUISaveMenuDataAsset;
class UTresUIMobilePortalDataAsset;
class UTresTheaterData;
class USoundBase;
class UTresUIActorSettingDataAsset;
class UTresUIDataAssetCodeMenu;

UCLASS()
class UTresUIData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UTresUIDataAssetGeneral* m_pGeneralDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UTresUIDataAssetCockpit* m_pCockpitDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pUIMainCommandData;
    
    UPROPERTY(EditDefaultsOnly)
    UTresUIFlowScopeDataAsset* m_pUIFlowScopeDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UTresUISlowModeDataAsset* m_pUISlowModeDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UTextureRenderTarget2D* m_pNaviMapRenderTargetTexture;
    
    UPROPERTY(EditDefaultsOnly)
    UTextureRenderTarget2D* m_pCampTopActorRenderTargetTexture[5];
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGameHelpDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresGameHelpCategory> m_GameHelpCampCategories;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pMissionGageData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pMissionCounterData;
    
    UPROPERTY(EditDefaultsOnly)
    UTresUIShopDataAsset* m_pShopDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UTextureRenderTarget2D* m_pCaptureBGTexture;
    
    UPROPERTY(EditDefaultsOnly)
    UTresUIWorldIconNameDataAsset* m_pWorldIconNameDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UTresUICustomizeDataAsset* m_pCustomizeDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pNaviMapDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UTresUISaveMenuDataAsset* m_pSaveMenuDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UTresUIMobilePortalDataAsset* m_pMobilePortalDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pNextTodoDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pTutorialDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pUICharacterDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UTresTheaterData* m_pTheaterData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pMemoryArchiveData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pPhilharmonicData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGameOverHintTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGumiGameOverHintTable;
    
    UPROPERTY(EditDefaultsOnly)
    UTresUIActorSettingDataAsset* m_pUIActorSettingDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pUILoadingScreenData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pUILoadingScreenDataDefinitions;
    
    UPROPERTY(EditDefaultsOnly)
    UTresUIDataAssetCodeMenu* m_pUIDataCodeMenu;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_TutorialBGM;
    
    UTresUIData();
};

