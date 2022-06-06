#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresASProxyTresControlsTabControl.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresASProxyTresControlsTabControl : public UTresASProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_SwitchL;
    
    UPROPERTY(Transient)
    UGFxObject* m_SwitchR;
    
public:
    UTresASProxyTresControlsTabControl();
};

