#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_CampMenu.generated.h"

class UTresASProxyTresControlsIcon;
class UTresASProxyRSLTopMenuCmd;
class UGFxObject;
class UTresUIP_CampMenuCharacterStatus;
class UTresASProxyRSLHelpText;
class UTresUIP_CampMenuAdventureGuide;
class UTresASProxyTresControlsButton;
class UTresASProxyRSLStageFrame;
class UTresASProxyRSLStageCategory;
class UTresCampController;
class UTresUIP_CampMenuSubParts;

UCLASS()
class UTresUIP_CampMenu : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_ObjBGIcons[3];
    
    UPROPERTY(Transient)
    UGFxObject* m_ObjTopMenu;
    
    UPROPERTY(Transient)
    UGFxObject* m_NextToDo;
    
    UPROPERTY(Transient)
    UGFxObject* m_ObjStatusAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_ObjStatus;
    
    UPROPERTY(Transient)
    UTresUIP_CampMenuCharacterStatus* m_CharacterStatus[5];
    
    UPROPERTY(Transient)
    UGFxObject* m_ObjAdventureGuideAnm;
    
    UPROPERTY(Transient)
    UTresUIP_CampMenuAdventureGuide* m_AdventureGuide;
    
    UPROPERTY(Transient)
    UTresASProxyRSLTopMenuCmd* m_MenuButtons[9];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsButton* m_CharaButtons[5];
    
    UPROPERTY()
    UTresASProxyRSLHelpText* m_HelpText;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageFrame* m_StageFrame;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_StageCategory1;
    
    UPROPERTY(Transient)
    UTresASProxyRSLStageCategory* m_StageCategory2;
    
    UPROPERTY(Transient)
    UTresCampController* m_CampController;
    
    UPROPERTY(Transient)
    UTresUIP_CampMenuSubParts* m_SubMenus[8];
    
public:
    UTresUIP_CampMenu();
};

