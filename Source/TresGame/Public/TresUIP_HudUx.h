#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresUIP_HudUx.generated.h"

class UTresUIP_HudUxMainCmdParts;
class UTresUIP_HudUxActSituationCmdParts;
class UTresUIP_HudUxScutCmdParts;
class UGFxObject;

UCLASS()
class UTresUIP_HudUx : public UTresCockpitParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UTresUIP_HudUxMainCmdParts*> m_arrayMainCmdParts;
    
    UPROPERTY(Transient)
    TArray<UTresUIP_HudUxActSituationCmdParts*> m_arrayActSituatenCmdParts;
    
    UPROPERTY(Transient)
    TArray<UTresUIP_HudUxScutCmdParts*> m_arrayScutCmdParts;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_cmdMenu;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcActTop;
    
    UPROPERTY(Transient)
    TArray<UGFxObject*> m_arrayGfxPoActCmd;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcActEvTop;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcActEvShort;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcActEvEffect;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcActEvMain;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcActEvTxtState;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcActEvTxtCol;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_txActEvTxtName;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcActEvPadBtn;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCmdMain;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCenter;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcBack;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcTitleTop;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCmdTitle;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcTitleName;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcScutTop;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcCmdSc;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcScEx;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcScExBaseSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcScDeck;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcScDeckArrowD;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcScDeckArrowU;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcScDeckPg1;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcScDeckPg2;
    
    UPROPERTY(Transient)
    UGFxObject* m_gfx_mcScDeckPg3;
    
public:
    UTresUIP_HudUx();
};

