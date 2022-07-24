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

UCLASS(NonTransient, Blueprintable)
class TRESGAME_API UTresGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(GlobalConfig, EditAnywhere, BlueprintReadWrite)
    FStringAssetReference m_AppLoadAssetName;
    
    UPROPERTY(GlobalConfig, EditAnywhere, BlueprintReadWrite)
    FStringAssetReference m_CommonAssetsName;
    
    UPROPERTY(GlobalConfig, EditAnywhere, BlueprintReadWrite)
    FStringAssetReference m_GameModeLoadAssetName;
    
    UPROPERTY(GlobalConfig, EditAnywhere, BlueprintReadWrite)
    TArray<FTresWorldCodeLoadAssetName> m_WorldCodeLoadAssetNames;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTresGameModeLoadAsset* m_AppStaticAsset;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTresCommonAssets* m_CommonAssets;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_Residents;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTresGameModeLoadAsset* m_GameStaticAsset;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTresWorldCodeLoadAsset* m_WorldStaticAsset;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTresWorldCodeLoadAsset* m_WorldStaticAssetBackup;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool m_DisableWorldResidents;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTresMapSet* m_TutorialMapSet;
    
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTresChrInitData* m_ChrInitData;
    
    UPROPERTY(Export, Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UAudioComponent* m_GameOverSE;
    
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTresMapSet> m_pMapSetForTemp;
    
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTresMapSet> m_pMapSetForLevelList;
    
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETresWorldCode> m_PreviousWorldCode;
    
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETresWorldCode> m_PreviousPlayableWorldCode;
    
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool m_DisableUpdatePreviousPlayableWorldCode;
    
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETresWorldCode> m_CurrentWorldCode;
    
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool m_LevelTransition;
    
    UPROPERTY(Transient)
    FURL m_TravelURL;
    
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTresObjectDataBuffer* m_WorldDataBuffer;
    
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool m_TheaterMode;
    
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTresShare* m_pShare;
    
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTresAchievement* m_pAchievement;
    
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TAssetPtr<UDataTable> m_pMapNameDataTable;
    
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TAssetPtr<UDataTable> m_pAreaNameDataTable;
    
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UDataTable* m_pNavMapDataTable;
    
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTresBattleLevelAutoAsset> m_pBattleLevelAutoTable;
    
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TAssetPtr<UDataTable> m_pBattleLevelFromNameTable;
    
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTresItemMan* m_ItemMan;
    
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTresDebugDisplayManager* m_pDebugDisplayManager;
    
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTresTaskClassListExecuter* m_pDebugTaskExecuter;
    
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTresTaskExecutor* m_pTaskExecuter;
    
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<AMatineeActor*> m_MatineeActorsForMovie;
    
public:
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTresUIManager* m_UIManager;
    
protected:
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    APlayerStart* m_pPlayerStartForTeleport;
    
    UPROPERTY(Transient)
    UClass* m_BlockGCClasses[8];
    
    UPROPERTY(Transient)
    TArray<UObject*> m_BlockGCObjects;
    
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTresNotifyEventToBlueprint* m_pCommonEvent;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTresLSIGameDriver m_LSIGameDriver;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTresGamePlayWorldSwitcher m_TutorialSwitcher;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UTresTimelinePlayer*> m_TimelinePlayers;
    
public:
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTresDebugData* m_DebugData;
    
protected:
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTresLevelEntityManager> m_TresLevelEntityManager;
    
private:
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTresTaggedActorPropertyManager> m_TresTaggedActorPropertyManager;
    
public:
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTresTexturePump* m_TexturePump;
    
protected:
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTresScreenshotSaveController> m_TresScreenshotSaveController;
    
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTresAlbumPhotoManager> m_TresAlbumPhotoManager;
    
    UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTresPhotoHologramManager> m_TresPhotoHologramManager;
    
private:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTresGameSettings* m_pGameSettings;
    
public:
    UTresGameInstance();
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUnlockSmartphone(bool bUnlock);
    
};

