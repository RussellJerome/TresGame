#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsButton.h"
#include "TresASProxyRSLTopMenuCmd.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresASProxyRSLTopMenuCmd : public UTresASProxyTresControlsButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_HelpMessage;
    
    UPROPERTY(Transient)
    UGFxObject* m_CategoryIcon;
    
public:
    UTresASProxyRSLTopMenuCmd();
};

