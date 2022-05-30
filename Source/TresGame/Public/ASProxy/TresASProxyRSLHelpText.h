#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresASProxyRSLHelpText.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresASProxyRSLHelpText : public UTresASProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGFxObject* m_pTxHelpText;
    
public:
    UTresASProxyRSLHelpText();
};

