// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresUIData.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIData : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UTresUIDataAssetGeneral* m_pGeneralDataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UTresUIDataAssetCockpit* m_pCockpitDataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UDataTable* m_pUIMainCommandData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UTresUIFlowScopeDataAsset* m_pUIFlowScopeDataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UTresUISlowModeDataAsset* m_pUISlowModeDataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UTextureRenderTarget2D* m_pNaviMapRenderTargetTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UTextureRenderTarget2D* m_pCampTopActorRenderTargetTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UDataTable* m_pGameHelpDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	TArray<ETresGameHelpCategory> m_GameHelpCampCategories;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UDataTable* m_pMissionGageData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UDataTable* m_pMissionCounterData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UTresUIShopDataAsset* m_pShopDataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UTextureRenderTarget2D* m_pCaptureBGTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UTresUIWorldIconNameDataAsset* m_pWorldIconNameDataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UTresUICustomizeDataAsset* m_pCustomizeDataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UDataTable* m_pNaviMapDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UTresUISaveMenuDataAsset* m_pSaveMenuDataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UTresUIMobilePortalDataAsset* m_pMobilePortalDataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UDataTable* m_pNextTodoDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UDataTable* m_pTutorialDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UDataTable* m_pUICharacterDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UTresTheaterData* m_pTheaterData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UDataTable* m_pMemoryArchiveData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UDataTable* m_pPhilharmonicData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UDataTable* m_pGameOverHintTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UDataTable* m_pGumiGameOverHintTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UTresUIActorSettingDataAsset* m_pUIActorSettingDataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UDataTable* m_pUILoadingScreenData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UDataTable* m_pUILoadingScreenDataDefinitions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	class UTresUIDataAssetCodeMenu* m_pUIDataCodeMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIData")
	TAssetPtr<class USoundBase> m_TutorialBGM;
};
