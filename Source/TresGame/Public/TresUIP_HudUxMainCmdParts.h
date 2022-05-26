#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresUIP_HudUxMainCmdParts.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_HudUxMainCmdParts : public UTresASProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGFxObject* m_gfx_cmdText1;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txCmdName;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txtFieldCmdText;
    
public:
    UTresUIP_HudUxMainCmdParts();
};

