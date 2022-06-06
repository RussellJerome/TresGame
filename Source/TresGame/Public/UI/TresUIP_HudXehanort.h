#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresUIP_HudXehanort.generated.h"

class UGFxObject;
class UTresUIP_HudCommandMainParts;
class UTresUIP_HudCommandExParts;
class UTresUIP_HudCommandActSParts;

UCLASS()
class UTresUIP_HudXehanort : public UTresCockpitParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_mcRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcCmdMenu;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcActTop;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcActAll;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcActEvTop;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcActEvShort;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcMainTop;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcCmdMain;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcMainLeft;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcMainUnder;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcCenter;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcBack;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcTitleTop;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcCmdTitle;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcTitleName;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcExTop;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcCmdEx;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcExBaseSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcScutTop;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcCmdSc;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcScCmdEx;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcScExBaseSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcScDeck;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcScDeckArrowD;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcScDeckArrowU;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcScDeckPg1;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcScDeckPg2;
    
    UPROPERTY(Transient)
    UGFxObject* m_mcScDeckPg3;
    
    UPROPERTY(Transient)
    TArray<UTresUIP_HudCommandMainParts*> m_mcMainCmdParts;
    
    UPROPERTY(Transient)
    TArray<UTresUIP_HudCommandExParts*> m_mcExtraCmdParts;
    
    UPROPERTY(Transient)
    UTresUIP_HudCommandActSParts* m_mcActEvSituationCmdParts;
    
    UPROPERTY(Transient)
    TArray<UTresUIP_HudCommandActSParts*> m_mcActSituationCmdParts;
    
public:
    UTresUIP_HudXehanort();
};

