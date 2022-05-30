#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresUIP_HudCommandExParts.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_HudCommandExParts : public UTresASProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGFxObject* m_mcCmdEvText1;
    
    UPROPERTY(Transient)
    UGFxObject* m_txCmdName;
    
    UPROPERTY(Transient)
    UGFxObject* m_txtFieldCmdText;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcCmdNumber;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcCmdNumCol;
    
    UPROPERTY(Transient)
    UGFxObject* m_coCmdNumberTxt;
    
    UPROPERTY(Transient)
    UGFxObject* m_txtFieldPadBtn;
    
public:
    UTresUIP_HudCommandExParts();
};

