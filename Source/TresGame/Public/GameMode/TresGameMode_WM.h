#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGameModeBase.h"
#include "TresGameMode_WM.generated.h"

class ATresWorldMapCameraActor;
class ATresGummiMenuManager;
class UTresGummiEditorDataTableSet;
class ATresGummiEditorActor;
class UTresUISystemSEDataSet;
class USoundBase;
class ATresGummiEditorManager;

UCLASS(NonTransient)
class ATresGameMode_WM : public ATresGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWorldMapCameraActor> WorldMapCameraActorRef;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresGummiMenuManager> GummiMenuManagerRef;
    
    UPROPERTY(EditDefaultsOnly)
    UTresGummiEditorDataTableSet* m_pEditorDataSet;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pWorldMapBGM;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pGummiEditBGM;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pDepaureBGM;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pSE_Move;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pSE_Decide;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pSE_Cancel;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pSE_Beep;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pSE_L2R2;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pSE_HELP_OPEN;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pSE_HELP_NEXT;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pSE_GUMMI_Move;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pSE_GUMMI_ROT;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pSE_GRID_ROT;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pSE_GUMMI_Decide;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pSE_GUMMI_Delete;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pSE_NAME_Decide;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pSE_NAME_Delete;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pSE_NAME_Final_Decide;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pSE_STICKER_Free_Move;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pSE_STICKER_Scale_Change;
    
    UPROPERTY(EditDefaultsOnly)
    UTresUISystemSEDataSet* m_pUISound;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresGummiEditorManager> GummiEditorManagerRef;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresGummiEditorActor> GummiEditorActorRef;
    
private:
    UPROPERTY(Transient)
    ATresGummiMenuManager* m_pGummiMenuManager;
    
    UPROPERTY(Transient)
    ATresGummiEditorManager* m_pGummiEditorManager;
    
    UPROPERTY()
    ATresWorldMapCameraActor* m_pWorldMapCameraActor;
    
public:
    ATresGameMode_WM();
    UFUNCTION(BlueprintPure)
    ATresWorldMapCameraActor* GetWorldMapCameraActor() const;
    
    UFUNCTION(BlueprintPure)
    ATresGummiMenuManager* GetGummiMenuManager() const;
    
    UFUNCTION(BlueprintPure)
    ATresGummiEditorManager* GetGummiEditorManager() const;
    
};

