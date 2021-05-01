// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "TresGame.h"
#include "TresGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	FStringAssetReference m_AppLoadAssetName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	FStringAssetReference m_CommonAssetsName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	FStringAssetReference m_GameModeLoadAssetName;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	//TArray<struct FTresWorldCodeLoadAssetName> m_WorldCodeLoadAssetNames;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	//class UTresGameModeLoadAsset* m_AppStaticAsset;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	//class UTresCommonAssets* m_CommonAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	TArray<UObject*> m_Residents;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	class UTresGameModeLoadAsset* m_GameStaticAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	class UTresWorldCodeLoadAsset* m_WorldStaticAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	class UTresWorldCodeLoadAsset* m_WorldStaticAssetBackup;*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	bool m_DisableWorldResidents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	class UTresMapSet* m_TutorialMapSet;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	//class UTresChrInitData* m_ChrInitData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	class UAudioComponent* m_GameOverSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	class UTresMapSet* m_pMapSetForTemp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	class UTresMapSet* m_pMapSetForLevelList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	TEnumAsByte<ETresWorldCode> m_PreviousWorldCode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	TEnumAsByte<ETresWorldCode> m_PreviousPlayableWorldCode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	bool m_DisableUpdatePreviousPlayableWorldCode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	TEnumAsByte<ETresWorldCode> m_CurrentWorldCode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	bool m_LevelTransition;

	FURL m_TravelURL;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	//class UTresObjectDataBuffer* m_WorldDataBuffer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	bool m_TheaterMode;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	//class UTresShare* m_pShare;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	//class UTresAchievement* m_pAchievement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	class UDataTable* m_pMapNameDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	class UDataTable* m_pAreaNameDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	class UDataTable* m_pNavMapDataTable;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	//class UTresBattleLevelAutoAsset* m_pBattleLevelAutoTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	class UDataTable* m_pBattleLevelFromNameTable;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	class UTresItemMan* m_ItemMan;
	class UTresDebugDisplayManager* m_pDebugDisplayManager;
	class UTresTaskClassListExecuter* m_pDebugTaskExecuter;
	class UTresTaskExecutor* m_pTaskExecuter;
	TArray<class AMatineeActor*> m_MatineeActorsForMovie;
	class UTresUIManager* m_UIManager;
	class APlayerStart* m_pPlayerStartForTeleport;
	class UClass* m_BlockGCClasses;
	TArray<class UObject*> m_BlockGCObjects;
	class UTresNotifyEventToBlueprint* m_pCommonEvent;
	struct FTresLSIGameDriver m_LSIGameDriver;
	struct FTresGamePlayWorldSwitcher m_TutorialSwitcher;
	TArray<class UTresTimelinePlayer*> m_TimelinePlayers;
	class UTresDebugData* m_DebugData;
	class UTresLevelEntityManager* m_TresLevelEntityManager;
	class UTresTaggedActorPropertyManager* m_TresTaggedActorPropertyManager;
	class UTresTexturePump* m_TexturePump;
	class UTresScreenshotSaveController* m_TresScreenshotSaveController;
	class UTresAlbumPhotoManager* m_TresAlbumPhotoManager;
	class UTresPhotoHologramManager* m_TresPhotoHologramManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameInstance")
	class UTresGameSettings* m_pGameSettings;*/

	UFUNCTION(BlueprintCallable, Category = "TresGameInstance")
	void DebugUnlockSmartphone(bool bUnlock) {};
};
