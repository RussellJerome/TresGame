#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresUIP_HudUxActSituationCmdParts.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_HudUxActSituationCmdParts : public UTresASProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGFxObject* m_gfx_cmdActAll;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_cmdAct;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_cmdAct1;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_cmdActInEff;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_cmdActIco;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_cmdText1;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txCmdName;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txtFieldCmdText;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txPadBtn;
    
public:
    UTresUIP_HudUxActSituationCmdParts();
};

