#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresASProxyTresControlsScrollBar.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresASProxyTresControlsScrollBar : public UTresASProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Thumb;
    
    UPROPERTY(Transient)
    UGFxObject* m_Bg;
    
    UPROPERTY(Transient)
    UGFxObject* m_ScrollTargetTextField;
    
public:
    UTresASProxyTresControlsScrollBar();
};

