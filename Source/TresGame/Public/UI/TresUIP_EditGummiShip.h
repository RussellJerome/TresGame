#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_EditGummiShip.generated.h"

class ATresGummiEditorManager;
class UTresUIP_HelpGummiShip;
class UGFxObject;
class ATresGameMode_WM;
class UTresASProxyTresControlsIcon;
class UTresASProxyTresControlsButton;
class UTresASProxyTresControlsList;
class UTresASProxyTresControlsTabControl;
class UTresGummiEditorDataTableSet;
class UTresASProxyTresControlsRadarChart;

UCLASS()
class UTresUIP_EditGummiShip : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ATresGameMode_WM* m_pGameMode;
    
    UPROPERTY(Transient)
    UGFxObject* m_pEditTitleGroup;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSetupGroup;
    
    UPROPERTY(Transient)
    UGFxObject* m_pCommonGroup;
    
    UPROPERTY(Transient)
    UGFxObject* m_pEditTitle;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTotalStatusFrame;
    
    UPROPERTY(Transient)
    UGFxObject* m_pEditTop;
    
    UPROPERTY(Transient)
    UGFxObject* m_pAbilityFrame;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTinyShipFrame;
    
    UPROPERTY(Transient)
    UGFxObject* m_pEditMenu;
    
    UPROPERTY(Transient)
    UGFxObject* m_pEditDetails;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSaveBlueprint;
    
    UPROPERTY(Transient)
    UGFxObject* m_pNameEntry;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSelectBlueprintFrame;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBtnInfo;
    
    UPROPERTY(Transient)
    UGFxObject* m_pAbility;
    
    UPROPERTY(Transient)
    UGFxObject* m_pNeedPartsFrame;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDataEmptyText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSetupMenu;
    
    UPROPERTY(Transient)
    UGFxObject* m_ptitleFrame;
    
    UPROPERTY(Transient)
    UGFxObject* m_pEquipFrame;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSelectWepFrame;
    
    UPROPERTY(Transient)
    UGFxObject* m_pOnboardWepFrame;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSwitchTargetAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSelectParameterFrame;
    
    UPROPERTY(Transient)
    UGFxObject* m_pWeaponHelp;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_pObjCharaIcon[20];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_pSetupMenuCmds[2];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_pConfigMenuCmds[4];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_pMainMenuCmds[2];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_pEditMenuCmds[7];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_pEditMenuGummicategoryCmds[4];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_pEditMenuCoordinateCmds[3];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_pNeedPartsButton;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_pWeaponList;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_pNeedPartsList;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_pAbilityList;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_pPlanSaveList;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsTabControl* m_pPlanListTab;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_pPlanList;
    
    UPROPERTY(Transient)
    UGFxObject* m_pPlanListTabHelp;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsTabControl* m_pNameEntryListTab;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_pNameEntryButton1[100];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_pNameEntryButton2[100];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsTabControl* m_pGummiListTab;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_pGummiButton[20];
    
    UPROPERTY(Transient)
    UGFxObject* m_pBlockName;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_pColorButton[64];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_pStickerBoxButton[8];
    
    UPROPERTY(Transient)
    UTresUIP_HelpGummiShip* m_pGummiHelp;
    
    UPROPERTY(Transient)
    UTresGummiEditorDataTableSet* m_pGummiEditorDataTableSet;
    
    UPROPERTY(Transient)
    ATresGummiEditorManager* m_pGummiEditorManager;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsRadarChart* m_pRadarChart;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_pGummiPartsIcon;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_pGummiStickerIcon;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_pEquipWepIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_pItemWindowFrame;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDisableMark;
    
public:
    UTresUIP_EditGummiShip();
};

