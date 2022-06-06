#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresUIP_HudCommandActSParts.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_HudCommandActSParts : public UTresASProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGFxObject* m_mcCmdAct;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcCmdAct1;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcCmdActEvText;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcCmdText1;
    
    UPROPERTY(Transient)
    UGFxObject* m_txCmdName;
    
    UPROPERTY(Transient)
    UGFxObject* m_txtFieldCmdText;
    
    UPROPERTY(Transient)
    UGFxObject* m_txtFieldPadBtn;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcCmdActInEff;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcCmdActStylePntGg;
    
public:
    UTresUIP_HudCommandActSParts();
};

