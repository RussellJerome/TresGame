#pragma once
#include "CoreMinimal.h"
#include "TresUIP_CampMenuSubParts.h"
#include "TresUIP_CampMenuCustomize.generated.h"

class UTresASProxyTresControlsList;
class UTresASProxyRSLHelpText;
class UTresASProxyTresControlsTabControl;
class UTresASProxyRSLStageCategory;
class UGFxObject;
class UTresASProxyTresControlsButton;

UCLASS(NonTransient)
class UTresUIP_CampMenuCustomize : public UTresUIP_CampMenuSubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_HelpText;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_StageCategory;
    
    UPROPERTY(Transient)
    UGFxObject* m_TopLayerTitles[3];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_TopLayerButtons[9];
    
    UPROPERTY(Transient)
    UGFxObject* m_MagicAndLinkRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_MagicAndLinkTitle;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_MagicLinkButtons[6];
    
    UPROPERTY(Transient)
    UGFxObject* m_MagicLinkWindow;
    
    UPROPERTY(Transient)
    UGFxObject* m_MagicSettingThirdLayerRoot;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_MagicStrengthButtons[3];
    
    UPROPERTY(Transient)
    UGFxObject* m_ShortcutButtonRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_ShortcutTitle;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_ShortcutButtons[4];
    
    UPROPERTY(Transient)
    UGFxObject* m_ShortcutButtonsPadText[4];
    
    UPROPERTY(Transient)
    UGFxObject* m_ShortcutListRoot;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_ShortcutSettingList;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsTabControl* m_ShortcutListTab;
    
    UPROPERTY(Transient)
    UGFxObject* m_NpcSecondLayerRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_NpcSettingTitles[3];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_NpcSettingButtons[6];
    
    UPROPERTY(Transient)
    UGFxObject* m_NpcSettingListRoot;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_NpcSettingListButtons[4];
    
    UPROPERTY(Transient)
    UGFxObject* m_NpcSettingListTitle;
    
public:
    UTresUIP_CampMenuCustomize();
};

