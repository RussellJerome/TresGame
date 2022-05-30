#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_SaveLoad.generated.h"

class UTresASProxyRSLTopMenuCmd;
class UGFxObject;
class UTresASProxyRSLStageCategory;
class UTresASProxyTresControlsList;
class UTresUIP_SaveLoadAutoSaveButton;
class UTresASProxyRSLHelpText;
class UTresASProxyRSLTutorialMenu;
class UTresASProxyRSLStageFrame;

UCLASS()
class UTresUIP_SaveLoad : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_SaveTopRoot;
    
    UPROPERTY(Transient)
    UTresASProxyRSLTopMenuCmd* m_SaveTopButtons[6];
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_SaveTopCategory;
    
    UPROPERTY(Transient)
    UGFxObject* m_AreaSelectRoot;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_AreaSelectList;
    
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_AreaSelectHelp;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_AreaSelectCategory;
    
    UPROPERTY(Transient)
    UGFxObject* m_SaveListRoot;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_SaveDataList;
    
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_SaveListHelp;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_SaveListCategory;
    
    UPROPERTY(Transient)
    UGFxObject* m_LoadListRoot;
    
    UPROPERTY(Transient)
    UTresUIP_SaveLoadAutoSaveButton* m_AutoSaveButton;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_LoadDataList;
    
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_LoadListHelp;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_LoadListCategory;
    
    UPROPERTY(Transient)
    UGFxObject* m_LoadClearListRoot;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_LoadClearDataList;
    
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_LoadClearListHelp;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_LoadClaerListCategory;
    
    UPROPERTY(Transient)
    UGFxObject* m_TutorialMenuRoot;
    
    UPROPERTY(Transient)
    UTresASProxyRSLTutorialMenu* m_TutorialMenu;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_TutorialMenuCategory;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageFrame* m_StageFrame;
    
    UPROPERTY(Transient)
    UGFxObject* m_BgRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_BgColor;
    
public:
    UTresUIP_SaveLoad();
};

