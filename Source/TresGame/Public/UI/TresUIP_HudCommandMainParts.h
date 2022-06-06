#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresUIP_HudCommandMainParts.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_HudCommandMainParts : public UTresASProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGFxObject* m_mcCmdText1;
    
    UPROPERTY(Transient)
    UGFxObject* m_txCmdName;
    
    UPROPERTY(Transient)
    UGFxObject* m_txtFieldCmdText;
    
public:
    UTresUIP_HudCommandMainParts();
};

