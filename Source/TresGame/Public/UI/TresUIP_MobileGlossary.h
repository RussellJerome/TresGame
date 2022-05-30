#pragma once
#include "CoreMinimal.h"
#include "TresUIP_MobilePortalApp.h"
#include "TresUIP_MobileGlossary.generated.h"

class UGFxObject;
class UTresASProxyRSLHelpText;
class UTresASProxyTresControlsList;
class UTresASProxyTresControlsScrollBar;

UCLASS()
class UTresUIP_MobileGlossary : public UTresUIP_MobilePortalApp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Root;
    
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
    
public:
    UTresUIP_MobileGlossary();
};

