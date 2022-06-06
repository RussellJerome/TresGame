#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresUIP_HudGigasGameFront.generated.h"

class UTresASProxyTresControlsBitmapNumber;
class UTresUIP_HudParts;
class UTresUIP_HudGigasGameFrontGetScore;
class UTresTimerTask;
class UGFxObject;

UCLASS()
class UTresUIP_HudGigasGameFront : public UTresCockpitParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresUIP_HudParts* m_HudParts;
    
    UPROPERTY(Transient)
    UTresTimerTask* m_TimerTask;
    
    UPROPERTY(Transient)
    UGFxObject* m_ScoreTimeAnimation;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_TimerMin;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_TimerSec;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_TimerMilliSec;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_ScoreNumber;
    
    UPROPERTY(Transient)
    UGFxObject* m_ScoreNumberEffect;
    
    UPROPERTY(Transient)
    UGFxObject* m_ScoreNumberLineEffect;
    
    UPROPERTY(Transient)
    UTresUIP_HudGigasGameFrontGetScore* m_GetScore1;
    
    UPROPERTY(Transient)
    UTresUIP_HudGigasGameFrontGetScore* m_GetScore2;
    
    UPROPERTY(Transient)
    UTresUIP_HudGigasGameFrontGetScore* m_NowDisplayGetScore;
    
    UPROPERTY(Transient)
    UGFxObject* m_ChainBonusAnimation;
    
    UPROPERTY(Transient)
    UGFxObject* m_ChainBonusEffect;
    
    UPROPERTY(Transient)
    UGFxObject* m_ChainBonusNumberAnimation;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_ChainBonusIntegerNumber;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_ChainBonusDecimalNumber;
    
    UPROPERTY(Transient)
    UGFxObject* m_ChainBonusMultipleAdjust;
    
    UPROPERTY(Transient)
    UGFxObject* m_ChainBonusTextAdjust;
    
    UPROPERTY(Transient)
    UGFxObject* m_ChainBonusMarkAdjust;
    
public:
    UTresUIP_HudGigasGameFront();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};

