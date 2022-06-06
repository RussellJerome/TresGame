#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresASProxyRSLStageFrame.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;
class UTresASProxyRSLBtnInfo;

UCLASS(NonTransient)
class UTresASProxyRSLStageFrame : public UTresASProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_StageObjR;
    
    UPROPERTY(Transient)
    UGFxObject* m_PlayTime;
    
    UPROPERTY(Transient)
    UGFxObject* m_PlayTimeHourText;
    
    UPROPERTY(Transient)
    UGFxObject* m_PlayTimeMinuteText;
    
    UPROPERTY(Transient)
    UGFxObject* m_Munny;
    
    UPROPERTY(Transient)
    UGFxObject* m_MunnyText;
    
    UPROPERTY(Transient)
    UGFxObject* m_AreaInfo;
    
    UPROPERTY(Transient)
    UGFxObject* m_WorldTitle;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_WorldIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_AreaNameText;
    
    UPROPERTY(Transient)
    UTresASProxyRSLBtnInfo* m_BtnInfo;
    
public:
    UTresASProxyRSLStageFrame();
};

