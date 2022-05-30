#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_MenuGummiShip.generated.h"

class UTresGameInstance;
class ATresGummiMenuManager;
class UTresASProxyTresControlsButton;
class UGFxObject;
class UTresASProxyTresControlsSlider;
class UTresASProxyTresControlsList;
class UTresGummiEditorDataTableSet;
class UTresItemMan;

UCLASS()
class UTresUIP_MenuGummiShip : public UTresUIParts {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ATresGummiMenuManager* m_pMenuManager;
    
    UPROPERTY(Transient)
    UGFxObject* m_pEventWindow;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBtnInfo;
    
    UPROPERTY(Transient)
    UGFxObject* m_pMessage;
    
    UPROPERTY(Transient)
    UGFxObject* m_pMissionList;
    
    UPROPERTY(Transient)
    UGFxObject* m_pRecordList;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTreasureList;
    
    UPROPERTY(Transient)
    UGFxObject* m_pPieceList;
    
    UPROPERTY(Transient)
    UGFxObject* m_pConfigList;
    
    UPROPERTY(Transient)
    UGFxObject* m_pStageEffBlack;
    
    UPROPERTY(Transient)
    UGFxObject* m_pScreenEffBlack;
    
    UPROPERTY(Transient)
    UGFxObject* m_pScreenBlackWM;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTitle;
    
    UPROPERTY(Transient)
    UGFxObject* m_pMenuCmdSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pLevel;
    
    UPROPERTY(Transient)
    UGFxObject* m_pInfoLocation;
    
    UPROPERTY(Transient)
    UGFxObject* m_pInfoSelectObjectA;
    
    UPROPERTY(Transient)
    UGFxObject* m_pInfoSelectObjectB;
    
    UPROPERTY(Transient)
    UGFxObject* m_pAreaSelectList;
    
    UPROPERTY(Transient)
    UGFxObject* m_pLevelText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pInfoLocationSpaceName;
    
    UPROPERTY(Transient)
    UGFxObject* m_pInfoLocationWorldName;
    
    UPROPERTY(Transient)
    UGFxObject* m_pInfoSelectObjectAWorldName;
    
    UPROPERTY(Transient)
    UGFxObject* m_pInfoSelectObjectATreasureRate;
    
    UPROPERTY(Transient)
    UGFxObject* m_pInfoSelectObjectABattleLv;
    
    UPROPERTY(Transient)
    UGFxObject* m_pInfoSelectObjectAWorldClear;
    
    UPROPERTY(Transient)
    UGFxObject* m_pInfoWorldObjectName;
    
    UPROPERTY(Transient)
    UGFxObject* m_pMesIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGummiPieceListSpaceName;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGummiPieceListL2;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGummiPieceListR2;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTreasureListSpaceName;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTreasureListL2;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTreasureListR2;
    
    UPROPERTY(Transient)
    UGFxObject* m_pRecordListSpaceName;
    
    UPROPERTY(Transient)
    UGFxObject* m_pRecordListL2;
    
    UPROPERTY(Transient)
    UGFxObject* m_pRecordListR2;
    
    UPROPERTY(Transient)
    UGFxObject* m_pAreaSelectMapName;
    
    UPROPERTY(Transient)
    UGFxObject* m_pAreaSelectAreaName;
    
    UPROPERTY(Transient)
    UGFxObject* m_pSpaceName;
    
    UPROPERTY(Transient)
    UGFxObject* m_pMissionGoalText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pRewardText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pInfoClear;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsSlider* m_pASProxyGummiSettingSlider[2];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_pASProxyGummiPieceList;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_pASProxyMissionList;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_pASProxyTreasureList;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_pASProxyAreaSelectList;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_pASProxyRecordList;
    
    UPROPERTY(Transient)
    UTresGummiEditorDataTableSet* m_pGummiEditorDataTableSet;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_pSelectButtonCmds[5];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_pSelectConfigCmds[5];
    
    UPROPERTY(Transient)
    UTresGameInstance* m_pGameInstance;
    
    UPROPERTY(Transient)
    UTresItemMan* m_pItemMan;
    
    UTresUIP_MenuGummiShip();
};

