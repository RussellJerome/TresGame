#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresGummiMenuManager.generated.h"

class ATresWorldMapCameraActor;
class ATresHudGummiMenu;
class ATresGummiEditorManager;
class UTresUIP_HelpGummiShip;
class ATresWorldMapObject;
class UDataTable;
class USoundBase;
class ATresGumiShipHUD;
class UTresFieldVoice;
class UTresUIManager;
class ATresWorldMapPlayerController;
class ATresGumiShipPlayerControllerDefault;
class USceneComponent;
class ULevelStreamingKismet;
class UTresGummiEditorDataTableSet;

UCLASS()
class ATresGummiMenuManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<ATresWorldMapObject> m_pShip;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<ATresWorldMapObject> m_pMist;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<ATresWorldMapObject> m_pBlackBG;
    
    UPROPERTY(EditAnywhere)
    bool m_isSpaceUse;
    
    UPROPERTY(EditAnywhere)
    int8 m_nSpaceNo;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pPreviewDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pSE_se00800_035;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pSE_se00800_036;
    
    UPROPERTY(EditDefaultsOnly)
    UTresFieldVoice* m_pFd_gm_ui_chip_0010;
    
    UPROPERTY(EditDefaultsOnly)
    UTresFieldVoice* m_pFd_gm_ui_chip_0020;
    
    UPROPERTY(EditDefaultsOnly)
    UTresFieldVoice* m_pFd_gm_ui_chip_0030;
    
    UPROPERTY(EditDefaultsOnly)
    UTresFieldVoice* m_pFd_gm_ui_chip_0040;
    
    UPROPERTY(EditDefaultsOnly)
    UTresFieldVoice* m_pFd_gm_ui_dale_0010;
    
    UPROPERTY(EditDefaultsOnly)
    UTresFieldVoice* m_pFd_gm_ui_dale_0020;
    
    UPROPERTY(EditDefaultsOnly)
    UTresFieldVoice* m_pFd_gm_ui_dale_0030;
    
    UPROPERTY(EditDefaultsOnly)
    UTresFieldVoice* m_pFd_gm_ui_dale_0040;
    
    UPROPERTY(EditDefaultsOnly)
    UTresFieldVoice* m_pFd_gm_ui_dale_0050;
    
private:
    UPROPERTY()
    ATresHudGummiMenu* m_pGummiHUD;
    
    UPROPERTY()
    ATresGumiShipHUD* m_pGummiSpaceHUD;
    
    UPROPERTY()
    UTresUIP_HelpGummiShip* m_pGummiHelp;
    
protected:
    UPROPERTY()
    UTresUIManager* m_pUIManager;
    
    UPROPERTY()
    ATresWorldMapCameraActor* m_pWorldMapCameraActor;
    
    UPROPERTY()
    ATresWorldMapPlayerController* m_pController;
    
    UPROPERTY()
    ATresGumiShipPlayerControllerDefault* m_pSpaceController;
    
    UPROPERTY(Transient)
    ATresWorldMapObject* m_pLocalWorldIcon;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ATresWorldMapObject> m_pLocalWorldSymble;
    
    UPROPERTY(Transient)
    ATresWorldMapObject* m_pMistWorldIcon[10];
    
    UPROPERTY(Transient)
    ATresWorldMapObject* m_pGummiShip;
    
    UPROPERTY(Transient)
    ATresWorldMapObject* m_pBlackWall;
    
    UPROPERTY(Transient)
    ATresGummiEditorManager* m_pGummiEditorManager;
    
    UPROPERTY(Export, Transient)
    USceneComponent* m_pRootComponent;
    
    UPROPERTY(Export, Transient)
    USceneComponent* m_pHubComponent;
    
    UPROPERTY(EditAnywhere, Export)
    USceneComponent* m_pLocalSpaceRootComponent[4];
    
    UPROPERTY(EditAnywhere, Export)
    USceneComponent* m_pLocalSpaceRootMoveComponent[4];
    
    UPROPERTY(Transient)
    TArray<ULevelStreamingKismet*> m_Kismet;
    
    UPROPERTY(Transient)
    TArray<ULevelStreamingKismet*> m_DepatureKismet;
    
public:
    ATresGummiMenuManager();
    UFUNCTION(BlueprintPure)
    ATresGumiShipHUD* GetSpaceHUD();
    
    UFUNCTION(BlueprintPure)
    ATresHudGummiMenu* GetHUD();
    
    UFUNCTION(BlueprintPure)
    UTresGummiEditorDataTableSet* GetGummiEditorData() const;
    
protected:
    UFUNCTION()
    void DelegateGummiMissionHelpOut(int32 InParam);
    
};

