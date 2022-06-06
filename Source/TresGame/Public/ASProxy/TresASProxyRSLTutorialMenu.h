#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresASProxyRSLTutorialMenu.generated.h"

class UTresASProxyRSLHelpText;
class UTresASProxyTresControlsList;
class UTresUIParts;
class UTresUIManager;

UCLASS(NonTransient)
class UTresASProxyRSLTutorialMenu : public UTresASProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_List;
    
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_HelpText;
    
    UPROPERTY(Transient)
    UTresUIParts* m_OwnerUIParts;
    
    UPROPERTY(Transient)
    UTresUIManager* m_UIManager;
    
public:
    UTresASProxyRSLTutorialMenu();
};

