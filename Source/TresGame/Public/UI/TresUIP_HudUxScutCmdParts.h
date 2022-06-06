#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresUIP_HudUxScutCmdParts.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_HudUxScutCmdParts : public UTresASProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txPadBtn;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcTextTop;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCmdName;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcNameCol;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txtName;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcNumCol;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txtNum;
    
public:
    UTresUIP_HudUxScutCmdParts();
};

