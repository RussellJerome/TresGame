#pragma once
#include "CoreMinimal.h"
#include "TresUIP_HudParts.h"
#include "TresUIP_HudLeftScore.generated.h"

class UGFxObject;
class UTresASProxyTresControlsBitmapNumber;

UCLASS(NonTransient)
class UTresUIP_HudLeftScore : public UTresUIP_HudParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pGFxScoreSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxNewRecord;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxEffAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxChainRate;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxChainCounter;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxChainRateSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxBase;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxScore;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxRate[2];
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxChain;
    
public:
    UTresUIP_HudLeftScore();
};

