#pragma once
#include "CoreMinimal.h"
#include "TresUIP_HudParts.h"
#include "TresUIP_HudLeftTimer.generated.h"

class UTresTimerTask;
class UGFxObject;
class UTresASProxyTresControlsBitmapNumber;

UCLASS(NonTransient)
class UTresUIP_HudLeftTimer : public UTresUIP_HudParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresTimerTask* m_TimerTask;
    
    UPROPERTY(Transient)
    UGFxObject* m_CounterAnimation;
    
    UPROPERTY(Transient)
    UGFxObject* m_CounterColorAnimation;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_CounterMin;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_CounterSec;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_CounterMilliSec;
    
    UPROPERTY(Transient)
    UGFxObject* m_CounterRec;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_RecordMin;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_RecordSec;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsBitmapNumber* m_RecordMilliSec;
    
    UPROPERTY(Transient)
    UGFxObject* m_NewRecordAnimation;
    
    UPROPERTY(Transient)
    UGFxObject* m_Title;
    
    UPROPERTY(Transient)
    UGFxObject* m_TitleText;
    
    UPROPERTY(Transient)
    UGFxObject* m_RslTimer;
    
public:
    UTresUIP_HudLeftTimer();
};

