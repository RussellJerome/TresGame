#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "TresWorldCodeLoadAssetName.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "Engine/EngineBaseTypes.h"
#include "ETresWorldCode.h"
#include "TresLSIGameDriver.h"
#include "TresGamePlayWorldSwitcher.h"
#include "TresGameInstance.generated.h"

class UTresAlbumPhotoManager;
class UTresChrInitData;
class UTresCommonAssets;
class UTresGameModeLoadAsset;
class UTresMapSet;
class UTresWorldCodeLoadAsset;
class UAudioComponent;
class UObject;
class UTresObjectDataBuffer;
class UTresShare;
class UTresAchievement;
class AMatineeActor;
class UDataTable;
class UTresBattleLevelAutoAsset;
class UTresItemMan;
class UTresDebugDisplayManager;
class UTresTaskClassListExecuter;
class UTresTaskExecutor;
class UTresUIManager;
class APlayerStart;
class UTresNotifyEventToBlueprint;
class UTresGameSettings;
class UTresTimelinePlayer;
class UTresScreenshotSaveController;
class UTresDebugData;
class UTresLevelEntityManager;
class UTresTaggedActorPropertyManager;
class UTresTexturePump;
class UTresPhotoHologramManager;

UCLASS(NonTransient)
class TRESGAME_API UTresGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(GlobalConfig)
    FStringAssetReference m_AppLoadAssetName;
    
    UPROPERTY(GlobalConfig)
    FStringAssetReference m_CommonAssetsName;
    
    UPROPERTY(GlobalConfig)
    FStringAssetReference m_GameModeLoadAssetName;
    
    UPROPERTY(GlobalConfig)
    TArray<FTresWorldCodeLoadAssetName> m_WorldCodeLoadAssetNames;
    
    UPROPERTY()
    UTresGameModeLoadAsset* m_AppStaticAsset;
    
    UPROPERTY()
    UTresCommonAssets* m_CommonAssets;
    
    UPROPERTY()
    TArray<UObject*> m_Residents;
    
    UPROPERTY()
    UTresGameModeLoadAsset* m_GameStaticAsset;
    
    UPROPERTY()
    UTresWorldCodeLoadAsset* m_WorldStaticAsset;
    
    UPROPERTY()
    UTresWorldCodeLoadAsset* m_WorldStaticAssetBackup;
    
    UPROPERTY()
    bool m_DisableWorldResidents;
    
    UPROPERTY()
    UTresMapSet* m_TutorialMapSet;
    
    UPROPERTY(Transient)
    UTresChrInitData* m_ChrInitData;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* m_GameOverSE;
    
    UPROPERTY(Transient)
    TAssetPtr<UTresMapSet> m_pMapSetForTemp;
    
    UPROPERTY(Transient)
    TAssetPtr<UTresMapSet> m_pMapSetForLevelList;
    
    UPROPERTY(Transient)
    TEnumAsByte<ETresWorldCode> m_PreviousWorldCode;
    
    UPROPERTY(Transient)
    TEnumAsByte<ETresWorldCode> m_PreviousPlayableWorldCode;
    
    UPROPERTY(Transient)
    bool m_DisableUpdatePreviousPlayableWorldCode;
    
    UPROPERTY(Transient)
    TEnumAsByte<ETresWorldCode> m_CurrentWorldCode;
    
    UPROPERTY(Transient)
    bool m_LevelTransition;
    
    UPROPERTY(Transient)
    FURL m_TravelURL;
    
    UPROPERTY(Transient)
    UTresObjectDataBuffer* m_WorldDataBuffer;
    
    UPROPERTY(Transient)
    bool m_TheaterMode;
    
    UPROPERTY(Transient)
    UTresShare* m_pShare;
    
    UPROPERTY(Transient)
    UTresAchievement* m_pAchievement;
    
    UPROPERTY(Transient)
    TAssetPtr<UDataTable> m_pMapNameDataTable;
    
    UPROPERTY(Transient)
    TAssetPtr<UDataTable> m_pAreaNameDataTable;
    
    UPROPERTY(Transient)
    UDataTable* m_pNavMapDataTable;
    
    UPROPERTY(Transient)
    TAssetPtr<UTresBattleLevelAutoAsset> m_pBattleLevelAutoTable;
    
    UPROPERTY(Transient)
    TAssetPtr<UDataTable> m_pBattleLevelFromNameTable;
    
    UPROPERTY(Transient)
    UTresItemMan* m_ItemMan;
    
    UPROPERTY(Transient)
    UTresDebugDisplayManager* m_pDebugDisplayManager;
    
    UPROPERTY(Transient)
    UTresTaskClassListExecuter* m_pDebugTaskExecuter;
    
    UPROPERTY(Transient)
    UTresTaskExecutor* m_pTaskExecuter;
    
    UPROPERTY(Transient)
    TArray<AMatineeActor*> m_MatineeActorsForMovie;
    
public:
    UPROPERTY(Transient)
    UTresUIManager* m_UIManager;
    
protected:
    UPROPERTY(Transient)
    APlayerStart* m_pPlayerStartForTeleport;
    
    UPROPERTY(Transient)
    UClass* m_BlockGCClasses[8];
    
    UPROPERTY(Transient)
    TArray<UObject*> m_BlockGCObjects;
    
    UPROPERTY(Transient)
    UTresNotifyEventToBlueprint* m_pCommonEvent;
    
    UPROPERTY()
    FTresLSIGameDriver m_LSIGameDriver;
    
    UPROPERTY()
    FTresGamePlayWorldSwitcher m_TutorialSwitcher;
    
    UPROPERTY()
    TArray<UTresTimelinePlayer*> m_TimelinePlayers;
    
public:
    UPROPERTY(Transient)
    UTresDebugData* m_DebugData;
    
protected:
    UPROPERTY(Transient)
    TAssetPtr<UTresLevelEntityManager> m_TresLevelEntityManager;
    
private:
    UPROPERTY(Transient)
    TAssetPtr<UTresTaggedActorPropertyManager> m_TresTaggedActorPropertyManager;
    
public:
    UPROPERTY(Transient)
    UTresTexturePump* m_TexturePump;
    
protected:
    UPROPERTY(Transient)
    TAssetPtr<UTresScreenshotSaveController> m_TresScreenshotSaveController;
    
    UPROPERTY(Transient)
    TAssetPtr<UTresAlbumPhotoManager> m_TresAlbumPhotoManager;
    
    UPROPERTY(Transient)
    TAssetPtr<UTresPhotoHologramManager> m_TresPhotoHologramManager;
    
private:
    UPROPERTY()
    UTresGameSettings* m_pGameSettings;
    
public:
    UTresGameInstance();
    UFUNCTION(Exec)
    void DebugUnlockSmartphone(bool bUnlock);
    
};

