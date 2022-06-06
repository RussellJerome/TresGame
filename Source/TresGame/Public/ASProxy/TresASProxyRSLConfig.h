#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresASProxyRSLConfig.generated.h"

class UTresASProxyRSLHelpText;
class UGFxObject;
class UTresASProxyRSLConfig_SettingItem;

UCLASS(NonTransient)
class UTresASProxyRSLConfig : public UTresASProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pGFx_configMenu;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFx_helpText;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFx_configPack;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFx_scrllBar;
    
    UPROPERTY(Transient)
    TArray<UTresASProxyRSLConfig_SettingItem*> m_ConfigItems;
    
    UPROPERTY(Transient)
    UTresASProxyRSLHelpText* m_pHelpText;
    
public:
    UTresASProxyRSLConfig();
};

