#pragma once
#include "CoreMinimal.h"
#include "TresUIP_MobilePortalApp.h"
#include "TresUIP_MobileStory.generated.h"

class UGFxObject;
class UTresASProxyRSLHelpText;
class UTresASProxyTresControlsList;
class UTresASProxyTresControlsScrollBar;
class UTresASProxyTresControlsIcon;

UCLASS()
class UTresUIP_MobileStory : public UTresUIP_MobilePortalApp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Root;
    
    UPROPERTY(Transient)
    UGFxObject* m_header;
    
    UPROPERTY(Transient)
    UGFxObject* m_Menu;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_List;
    
    UPROPERTY(Transient)
    UGFxObject* m_Content;
    
    UPROPERTY(Transient)
    UGFxObject* m_ContentText;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsScrollBar* m_ContentTextScrollBar;
    
    UPROPERTY(Transient)
    UGFxObject* m_HelpTextSet;
    
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_HelpText;
    
    UPROPERTY(Transient)
    UGFxObject* m_Bg;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_BgIcon;
    
public:
    UTresUIP_MobileStory();
};

